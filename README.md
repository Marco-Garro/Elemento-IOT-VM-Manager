# Elemento-IOT-VM-Manager
### overview
a vocal assistant command that can create a Windows VM using Elemento API.
In order to send the API request it's used a Web Api in C#.
The .NET server can be called using HTTP by postman, for example.
The idea is to use Homebridge and homebridge-web-switch(https://www.npmjs.com/package/homebridge-web-switch) to send the HTTP request using SIri. 
the HTTP sequest use POST verb.
the json(sended to the Elemento API) is hardcoded into the C# solution so it uses some default datas but it can be changed as you want.
### mac config
if you want to use the command directly on MAC you can create a shortcut select "web" and select under web request obtain content from an url and than insert into the url "http://localhost:17777/api/v1.0/client/vm/register". 
select POST as HTTP verb and add the json manually using key value pair.