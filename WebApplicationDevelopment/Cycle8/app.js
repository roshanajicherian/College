const express = require("express");
const bodyParser = require("body-parser")
const myApp = new express();
const mongoClient  = require("mongodb").MongoClient;
const connectionString = "mongodb://localhost:27017";
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
    let userName = req.body.userName;
    let password = req.body.password;
    let package = req.body.package;
    let myData  = {
        user : userName,
        pass : password,
        pack : package
    };
    console.log(myData);
    mongoClient.connect(connectionString,(err,client) =>
    {
        console.log("Connect to mongoDB.");
        let db = client.db("myWebpage");
        db.collection("userReg").insertOne(myData,(err,res) =>
        {
            if(err) throw err;
            console.log("Data added");
            client.close();
        });
    })
    res.end(`Hi, ${userName}. Thank you for choosing the ${package} package.`)


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