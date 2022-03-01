const express = require("express");
const bodyParser = require("body-parser")
const myApp = new express();
const rootFolder = {root : __dirname}

myApp.use(bodyParser.urlencoded({extended: true}));

myApp.get("/",(req,res)=>
{
    res.sendFile("./index.html",rootFolder);
})
myApp.get("/details",(req,res)=>
{
    res.sendFile("./details.html",rootFolder);
})
myApp.get("/register",(req,res)=>
{
    res.sendFile("./register.html",rootFolder);
})
myApp.post("/register",(req,res) =>
{
    res.end(`Hi, ${req.body.userName}. Thank you for choosing the ${req.body.package} package.`)
})
myApp.get("/style.css",(req,res)=>
{
    res.sendFile("./style.css",rootFolder);
})
myApp.get("/registerScript.js",(req,res) =>
{
    res.sendFile("./registerScript.js",rootFolder);
})


myApp.listen(3000);