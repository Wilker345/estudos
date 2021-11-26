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

companyRoutes.delete("/:cnpj", async (req, res) => {
  try {
    await Company.destroy({ where: { cnpj: req.params.cnpj } });
    res.json({ message: "Empresa excluída com sucesso." });
  } catch (e) {
    console.log(e);
    res.json({ error: e });
  }
});

companyRoutes.patch("/:cnpj", async (req, res) => {
  try {
    const company = await Company.findByPk(req.params.cnpj);
    await company.update(req.body);
    res.json({ message: "Empresa atualizada com sucesso." });
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
