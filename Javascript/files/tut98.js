const express = require('express')
const path = require('path')
const app = express()
const port = 3000

app.get('/', (req, res) => {
    res.send('Hello World!')
})
app.get('/notes', (req, res) => {
    res.sendFile(path.join(__dirname,'./index.html'));
    // res.send('Hey there are the notes!')
})
app.get('/about', (req, res) => {
    res.send('Wanna contact me?')
})

app.listen(port, () => {
    console.log(`Example app listening on port http://localhost:${port}`)
})