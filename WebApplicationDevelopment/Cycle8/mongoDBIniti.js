// Code for creating the mongo DB Collection (Code which has 
// to be run a single time)
let mongoClient = require("mongodb").MongoClient;

let connetionString = "mongodb://localhost:27017";

mongoClient.connect(connetionString,(err,client) =>
{
    if(err) throw err;
    console.log("Connected to MongoDB");
    let db = client.db("myWebpage");
    db.createCollection("userReg",(err,res) =>
    {
        if (err) throw err;
        console.log("Collection Created.")
        client.close();
    })
})