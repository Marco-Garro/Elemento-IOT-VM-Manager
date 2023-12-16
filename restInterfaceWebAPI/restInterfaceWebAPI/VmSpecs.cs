namespace restInterfaceWebAPI
{
    // Root myDeserializedClass = JsonConvert.DeserializeObject<Root>(myJsonResponse);
    public class Misc
    {
        public string os_family { get; set; }
        public string os_flavour { get; set; }
    }

    public class Pci
    {
        public string vendor { get; set; }
        public string model { get; set; }
        public int quantity { get; set; }
    }

    public class VmSpecs
    {
        public int slots { get; set; }
        public int overprovision { get; set; }
        public bool allowSMT { get; set; }
        public List<string> archs { get; set; }
        public List<string> flags { get; set; }
        public double min_frequency { get; set; }
        public int ramsize { get; set; }
        public bool reqECC { get; set; }
        public Misc misc { get; set; }
        public List<Pci> pci { get; set; }
    }


}