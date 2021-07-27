const data = new Date();
console.log(data.toString());
const dataCustom = new Date(2019, 3, 20, 15 , 14, 27, 980);
console.log(dataCustom.toString());
const dataCustomDois = new Date('2020-05-27 14:35:32');
console.log(dataCustomDois);
/*
tem como obter partes especificas de datas com
data.getDate, data.getMonth, etc etc
*/