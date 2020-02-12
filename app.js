const express=require('express')
const fs=require('fs')
const app=express();
var bodyParser = require('body-parser')
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json()); 
app.use(express.json());       // to support JSON-encoded bodies
app.use(express.urlencoded()); // to support URL-encoded bodies
app.use(express.static(__dirname));
app.get('',(res,req)=>
{
    req.sendFile('index.html')
})
app.post('/submit',(req,res)=>{
    console.log(req.body.FirstName)
      fs.appendFileSync("data.txt",req.body.FirstName+" "+req.body.LastName+"\r\n")
      res.send("Done!")
})
app.post('/newacc',(req,res)=>{
    text=" <html>\r\n <link rel=\"stylesheet\" href=\"../main.3f6952e4.css\">\r\n<body style=\"background-image: url('../images/back.jpg');\">\r\n<div type=\"container\" style=\"background:violet\">\r\n<h1 style=\"text-align: center; font-size: 72pt;\">ACCOUNT DETAILS</h1>\r\n<h3 style =\"text-align: center;color:darkgoldenrod; font-size: 40pt; border: black;outline-color: black;\">NAME:- "+ req.body.name +"<br><br> \r\n EMAIL:- "+req.body.email+" <br><br> \r\n NET BALANCE:- \r\n 500\r\n <br><br>\r\n <a href=\"../../balance.html\"><button>CLICK ON ME TO GO BACK</button></a></h></div></body></html><p hidden>500"
    fs.exists('assets/acc/'+req.body.name+'.html',(ex)=>
    { if (ex)
    {res.send("<script> alert(\"We regret to inform this username is already taken. Please choose another\")</script> <body style=\"background:black\"></body> <a href=\"index.html\" style=\"color:white\"> CLICK ON ME TO GET BACK TO THE APP <\a>")
    }
       else
    { fs.appendFileSync('assets/acc/'+req.body.name+".html",text)
    res.send('<body style=\"background:black\"></body><script> alert("The account has been made") </script> <a href=\"index.html\" style=\"color:white\"> CLICK ON ME TO GET BACK TO THE APP <\a>')
}
})
})
app.post('/bal',(req,res) =>{
 fs .exists('assets/acc/'+req.body.name+'.html',(ex)=>
 {
if (ex)
res.sendFile(__dirname+'/assets/acc/'+req.body.name+'.html')
else
{
    res.send("<script> alert(\"We regret to inform this username is not an existing user. Please correct the name\")</script> <body style=\"background:black\"></body> <a href=\"index.html\" style=\"color:white\"> CLICK ON ME TO GET BACK TO THE APP <\a>")
}
 })
})
app.post('/trans',(req,res) => {
   
    fs.exists('assets/acc/'+req.body.rec+'.html',(e)=>{
        if (e)
        {
            fs.exists('assets/acc/'+req.body.sen+'.html',(f)=>{
                if (f)
                {
                    fs.appendFileSync('assets/docs/rawf.txt',req.body.sen+"\r\n"+req.body.rec+"\r\n"+req.body.amount+"\r\n")
                    r=fs.readFileSync('assets/docs/undtran.txt')
                    r=Number(r)
                    r=r+1
                    fs.writeFileSync('assets/docs/undtran.txt',r)
                    res.sendFile(__dirname+'/transact.html')
                }
                else
                res.send('"<script> alert(\Sender does not exist.\")</script> <body style=\"background:black\"></body> <a href=\"index.html\" style=\"color:white\"> CLICK ON ME TO GET BACK TO THE APP <\a>"')
            })
        }
        else
        res.send("<script> alert(\"Receiver does not exist.\")</script> <body style=\"background:black\"></body> <a href=\"index.html\" style=\"color:white\"> CLICK ON ME TO GET BACK TO THE APP <\a>" )
})
})
app.get('/miner',(req,res)=>
{
    tr=fs.readFileSync("assets/docs/consmade.txt")
    if (Number(tr)==1)
    res.sendFile("E:/INSTANT_ALPHA/made.html");
    else
    res.sendFile("E:/INSTANT_ALPHA/make.html");
})
app.post('/minerno',(req,res) =>
{
    if (Number(req.body.no)>5)
    res.send("<script> alert(\Please Enter number between [1-5].\")</script> <body style=\"background:black\"></body> <a href=\"make.html\" style=\"color:white\"> CLICK ON ME TO GET BACK TO THE APP <\a>")
    else
    {
        q=fs.readFileSync("assets/chain/"+req.body.no+".txt");
        res.send("<html><title>Chain</title><body style=\"background:black; color:white \"> <h1 style=\"text-align:center\"> THE INSTANT_ALPHA CHAIN</h1> <br><br> <h3 style=\"text-align:center\"> SENDER's NAME  RECEIVER's NAME  AMOUNT <br> PREVIOUS HASH <br> HASH <br></h3> <br> <br>" +q +"<form method=\"POST\" action=\"minsub\"> RESPOND 1 for VALID AND 0 FOR BREACHED CHAIN :-<input placeholder=\"0,1\"  name=\"bno\"> <button action=\"Submit\"> SUBMIT </button> </html>")
    }
})
app.post('/minsub',(req,res)=>
{     if (Number(req.body.bno)>1 || Number(req.body.bno)<0)
    res.send("<script> alert(\Please Enter numbers 0 or 1 only.\")</script> <body style=\"background:black\"></body> <a href=\"make.html\" style=\"color:white\"> CLICK ON ME TO GET BACK TO THE APP <\a>")
          else
          fs.appendFileSync("assets/docs/consensbuild.txt",req.body.bno+"\r\n")
          res.send("<script> alert(\" MINER's FEED HAS TAKEN EFFECT. THANK YOU\")</script> <body style=\"background:black\"></body> <a href=\"miner\" style=\"color:white\"> CLICK ON ME TO GET BACK TO THE APP <\a>")

})
app.listen(3000,()=>{
console.log("Server online at 3000")
})