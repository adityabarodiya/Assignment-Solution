const express = require('express')
const app = express()
const port = 3000

app.get('/hello', (req, res) => {
  res.send({massage : "hello"})
})

app.get('/hello/billa', (req, res)=>{
    res.send("M hu billa");
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})