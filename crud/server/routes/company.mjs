import { Router } from "express";
import { Company } from "../models/Company.mjs";

export const companyRoutes = new Router();

companyRoutes.get("/", async (_req, res) => {
  try {
    const companies = await Company.findAll();
    res.json({ data: companies });
  } catch (e) {}
});

companyRoutes.post("/", async (req, res) => {
  try {
    const company = await Company.create(req.body);
    res.json({ message: company.toJSON() });
  } catch (e) {
    next(e);
  }
});

companyRoutes.delete("/delete/:cnpj", async (req, res) => {
  try {
    const paramPk = req.params.cnpj
    const pk = paramPk.substr(1, paramPk.lenght) //usar req.params.cnpj retorna ":cnpj"
    console.log(pk)
    await Company.destroy({
      where: {
         cnpj: pk
      }
    })
  } catch (e) {
    console.log(e);
  }
});

companyRoutes.patch("/patch/:cnpj", async (req, res) => {
  try {
    //console.log(req.body.cnpj) estava recebendo um objeto com parametro empresa
    const company = await Company.findByPk(req.body.cnpj.empresa);
    await company.update(req.body);
  } catch (e) {
    console.log(e);
    res.json({ error: e });
  }
});

companyRoutes.get("/:cnpj", async (req, res) => {
  try {
    const company = await Company.findByPk(req.params.cnpj);
    res.json({ data: company.toJSON() });
  } catch (e) {
    res.json({ error: "ocorreu um erro" }).status(500);
  }
});
