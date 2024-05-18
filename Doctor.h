#ifndef DOCTOR_H
#define DOCTOR_H

#include "HealthcareProfessional.h"

class Doctor : public HealthcareProfessional {
private:
    std::string licenseNumber;
    std::string expertise;

public:
    Doctor(int id, const std::string& name, const std::string& contactInfo, const std::string& specialty, const std::string& schedule, const std::string& licenseNumber, const std::string& expertise)
        : HealthcareProfessional(id, name, contactInfo, specialty, schedule), licenseNumber(licenseNumber), expertise(expertise) {}

    std::string getLicenseNumber() const { return licenseNumber; }
    std::string getExpertise() const { return expertise; }

    void display() const override {
        HealthcareProfessional::display();
        std::cout << "License Number: " << licenseNumber << ", Expertise: " << expertise << std::endl;
    }
};

#endif // DOCTOR_H
