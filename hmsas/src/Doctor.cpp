#include "Doctor.h"

// Constructor
Doctor::Doctor(int id, const std::string& name, const std::string& contactInfo, const std::string& licenseNumber, const std::string& expertise)
    : HealthcareProfessional(id, name, contactInfo, "Doctor"), licenseNumber(licenseNumber), expertise(expertise) {}

// Destructor
Doctor::~Doctor() {}

// Getter for license number
std::string Doctor::getLicenseNumber() const {
    return licenseNumber;
}

// Getter for expertise
std::string Doctor::getExpertise() const {
    return expertise;
}

// Setter for license number
void Doctor::setLicenseNumber(const std::string& licenseNumber) {
    this->licenseNumber = licenseNumber;
}

// Setter for expertise
void Doctor::setExpertise(const std::string& expertise) {
    this->expertise = expertise;
}

// Overridden method from HealthcareProfessional
void Doctor::performDuties() const {
    // Implement duties specific to doctors
    // For example: diagnosing patients, prescribing treatments, conducting surgeries, etc.
}
