#pragma once

#include <boost/optional.hpp>
#include <stdexcept>
#include <regex>

class Misc {
    public:
    Misc() = default;
    virtual ~Misc() = default;

    private:
    std::string os_family;
    std::string os_flavour;

    public:
    const std::string & get_os_family() const { return os_family; }
    std::string & get_mutable_os_family() { return os_family; }
    void set_os_family(const std::string & value) { this->os_family = value; }

    const std::string & get_os_flavour() const { return os_flavour; }
    std::string & get_mutable_os_flavour() { return os_flavour; }
    void set_os_flavour(const std::string & value) { this->os_flavour = value; }
};

class Pci {
    public:
    Pci() = default;
    virtual ~Pci() = default;

    private:
    std::string vendor;
    std::string model;
    int64_t quantity;

    public:
    const std::string & get_vendor() const { return vendor; }
    std::string & get_mutable_vendor() { return vendor; }
    void set_vendor(const std::string & value) { this->vendor = value; }

    const std::string & get_model() const { return model; }
    std::string & get_mutable_model() { return model; }
    void set_model(const std::string & value) { this->model = value; }

    const int64_t & get_quantity() const { return quantity; }
    int64_t & get_mutable_quantity() { return quantity; }
    void set_quantity(const int64_t & value) { this->quantity = value; }
};

class VmInfo {
    public:
    VmInfo() = default;
    virtual ~VmInfo() = default;

    private:
    int64_t slots;
    int64_t overprovision;
    bool allow_smt;
    std::vector<std::string> archs;
    std::vector<std::string> flags;
    double min_frequency;
    int64_t ramsize;
    bool req_ecc;
    Misc misc;
    std::vector<Pci> pci;

    public:
    const int64_t & get_slots() const { return slots; }
    int64_t & get_mutable_slots() { return slots; }
    void set_slots(const int64_t & value) { this->slots = value; }

    const int64_t & get_overprovision() const { return overprovision; }
    int64_t & get_mutable_overprovision() { return overprovision; }
    void set_overprovision(const int64_t & value) { this->overprovision = value; }

    const bool & get_allow_smt() const { return allow_smt; }
    bool & get_mutable_allow_smt() { return allow_smt; }
    void set_allow_smt(const bool & value) { this->allow_smt = value; }

    const std::vector<std::string> & get_archs() const { return archs; }
    std::vector<std::string> & get_mutable_archs() { return archs; }
    void set_archs(const std::vector<std::string> & value) { this->archs = value; }

    const std::vector<std::string> & get_flags() const { return flags; }
    std::vector<std::string> & get_mutable_flags() { return flags; }
    void set_flags(const std::vector<std::string> & value) { this->flags = value; }

    const double & get_min_frequency() const { return min_frequency; }
    double & get_mutable_min_frequency() { return min_frequency; }
    void set_min_frequency(const double & value) { this->min_frequency = value; }

    const int64_t & get_ramsize() const { return ramsize; }
    int64_t & get_mutable_ramsize() { return ramsize; }
    void set_ramsize(const int64_t & value) { this->ramsize = value; }

    const bool & get_req_ecc() const { return req_ecc; }
    bool & get_mutable_req_ecc() { return req_ecc; }
    void set_req_ecc(const bool & value) { this->req_ecc = value; }

    const Misc & get_misc() const { return misc; }
    Misc & get_mutable_misc() { return misc; }
    void set_misc(const Misc & value) { this->misc = value; }

    const std::vector<Pci> & get_pci() const { return pci; }
    std::vector<Pci> & get_mutable_pci() { return pci; }
    void set_pci(const std::vector<Pci> & value) { this->pci = value; }
};
