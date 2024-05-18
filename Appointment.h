#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <iostream>
#include <memory>
#include <string>
#include "Patient.h"
#include "HealthcareProfessional.h"

class Appointment {
private:
    std::string dateTime;
    std::shared_ptr<Patient> patient;
    std::shared_ptr<HealthcareProfessional> healthcareProfessional;

public:
    Appointment(const std::string& dateTime, std::shared_ptr<Patient> patient, std::shared_ptr<HealthcareProfessional> healthcareProfessional)
        : dateTime(dateTime), patient(patient), healthcareProfessional(healthcareProfessional) {}

    std::string getDateTime() const { return dateTime; }
    std::shared_ptr<Patient> getPatient() const { return patient; }
    std::shared_ptr<HealthcareProfessional> getHealthcareProfessional() const { return healthcareProfessional; }

    void display() const {
        std::cout << "Appointment Date and Time: " << dateTime
                  << ", Patient: " << patient->getName()
                  << ", Healthcare Professional: " << healthcareProfessional->getName() << std::endl;
    }
};

#endif // APPOINTMENT_H
