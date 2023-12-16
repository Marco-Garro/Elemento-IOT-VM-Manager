# Elemento-IOT-VM-Manager
### overview
a vocal assistant command that can create a Windows VM using Elemento API.
In order to send the API request it's used a Web Api in C#.
The .NET server can be called using HTTP by postman, for example.
The idea is to use Homebridge and homebridge-web-switch(https://www.npmjs.com/package/homebridge-web-switch) to send the HTTP request using SIri. 
the HTTP sequest use POST verb.
the json(sended to the Elemento API) is hardcoded into the C# solution so it uses some default datas but it can be changed as you want.