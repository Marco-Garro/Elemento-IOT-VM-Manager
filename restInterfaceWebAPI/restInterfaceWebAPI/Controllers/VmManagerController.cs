using Microsoft.AspNetCore.Mvc;

namespace restInterfaceWebAPI.Controllers
{
    [ApiController]
    [Route("[controller]")]
    public class VmManagerController : ControllerBase
    {

        private readonly ILogger<VmManagerController> _logger;
        private HttpClient client = new HttpClient();
        private string url = "http://localhost:17777/api/v1.0/client/vm/register";

        public VmManagerController(ILogger<VmManagerController> logger)
        {
            _logger = logger;
        }

        [HttpPost(Name = "VmManagerController")]
        public async Task<string> InvokeVM()
        {
            var request = new HttpRequestMessage(HttpMethod.Post, url);

            string parameters = "{\r\n  \"vm_name\": \"VM\",\r\n  \"slots\": 2,\r\n  \"overprovision\": 2,\r\n  \"allowSMT\": false,\r\n  \"archs\": [\"X86_64\"],\r\n  \"flags\": [\"sse2\"],\r\n  \"ramsize\": 2048,\r\n  \"reqECC\": false,\r\n  \"misc\": {\"os_family\": \"windows\", \"os_flavour\": \"windows10\"},\r\n  \"pci\": [\r\n      {\r\n          \"vendor\": \"10de\",\r\n          \"model\": \"24b0\",\r\n          \"quantity\": 1\r\n      },\r\n      {\r\n          \"vendor\": \"10de\",\r\n          \"model\": \"228b\",\r\n          \"quantity\": 1\r\n      }\r\n  ],\r\n  \"volumes\":[],\r\n  \"netdevs\": []\r\n}";

            var content = new StringContent(parameters, null, "application/json");

            request.Content = content;
            var response = await client.SendAsync(request);
            response.EnsureSuccessStatusCode();
            return await response.Content.ReadAsStringAsync();
        }
    }
}