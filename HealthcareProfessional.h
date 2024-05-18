#ifndef HEALTHCAREPROFESSIONAL_H
#define HEALTHCAREPROFESSIONAL_H

#include "Person.h"

class HealthcareProfessional : public Person {
protected:
    std::string specialty;
    std::string schedule;

public:
    HealthcareProfessional(int id, const std::string& name, const std::string& contactInfo, const std::string& specialty, const std::string& schedule)
        : Person(id, name, contactInfo, "Healthcare Professional"), specialty(specialty), schedule(schedule) {}

    std::string getSpecialty() const { return specialty; }
    std::string getSchedule() const { return schedule; }

    void display() const override {
        std::cout << "ID: " << id << ", Name: " << name << ", Contact: " << contactInfo
                  << ", Specialty: " << specialty << ", Schedule: " << schedule << std::endl;
    }
};

#endif // HEALTHCAREPROFESSIONAL_H
