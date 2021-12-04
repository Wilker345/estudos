import dotenv from "dotenv";
import SequelizePkg from "sequelize";
const { Sequelize } = SequelizePkg;

dotenv.config();

export const sequelize = new Sequelize(process.env.database, process.env.user, process.env.password, {
  host: process.env.host,
  dialect: 'mysql'
});
async function csequelize(){
  await sequelize.sync({
    force: false
  });
}
csequelize();
