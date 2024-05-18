#ifndef SPECIALIST_H
#define SPECIALIST_H

#include "HealthcareProfessional.h"

class Specialist : public HealthcareProfessional {
private:
    std::string subSpecialty;
    std::string availability;

public:
    Specialist(int id, const std::string& name, const std::string& contactInfo, const std::string& specialty, const std::string& schedule, const std::string& subSpecialty, const std::string& availability)
        : HealthcareProfessional(id, name, contactInfo, specialty, schedule), subSpecialty(subSpecialty), availability(availability) {}

    std::string getSubSpecialty() const { return subSpecialty; }
    std::string getAvailability() const { return availability; }

    void display() const override {
        HealthcareProfessional::display();
        std::cout << "Sub-Specialty: " << subSpecialty << ", Availability: " << availability << std::endl;
    }
};

#endif // SPECIALIST_H
