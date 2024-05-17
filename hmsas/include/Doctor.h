#ifndef DOCTOR_H
#define DOCTOR_H

#include "HealthcareProfessional.h"

class Doctor : public HealthcareProfessional {
private:
    std::string licenseNumber;
    std::string expertise;

public:
    // Constructor
    Doctor(int id, const std::string& name, const std::string& contactInfo, const std::string& licenseNumber, const std::string& expertise);

    // Destructor
    virtual ~Doctor();

    // Getter for license number
    std::string getLicenseNumber() const;

    // Getter for expertise
    std::string getExpertise() const;

    // Setter for license number
    void setLicenseNumber(const std::string& licenseNumber);

    // Setter for expertise
    void setExpertise(const std::string& expertise);

    // Overridden method from HealthcareProfessional
    virtual void performDuties() const override;
};

#endif // DOCTOR_H
