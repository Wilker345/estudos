import Sequelize from "sequelize";
const { DataTypes } = Sequelize;
import { sequelize } from "../database.mjs";

export const Company = sequelize.define("company", {
  cnpj: {
    type: DataTypes.STRING(14),
    allowNull: false,
    primaryKey: true,
  },
  name: {
    type: DataTypes.STRING,
    allowNull: false,
  },
});
