import Sequelize from "sequelize";
const { DataTypes } = Sequelize;
import { sequelize } from "../database.mjs";

export const User = sequelize.define("user", {
  email: {
    type: DataTypes.STRING(45),
    primaryKey: true,
    allowNull: false,
    unique: true,
  },
  name: {
    type: DataTypes.STRING(45),
    allowNull: true,
  },
  token: {
    type: DataTypes.STRING(),
    allowNull: true,
    unique: true,
  }
});
