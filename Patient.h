#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"

class Patient : public Person {
private:
    std::string medicalHistory;
    std::string treatmentPlan;

public:
    Patient(int id, const std::string& name, const std::string& contactInfo, const std::string& medicalHistory, const std::string& treatmentPlan)
        : Person(id, name, contactInfo, "Patient"), medicalHistory(medicalHistory), treatmentPlan(treatmentPlan) {}

    std::string getMedicalHistory() const { return medicalHistory; }
    std::string getTreatmentPlan() const { return treatmentPlan; }

    void display() const override {
        std::cout << "ID: " << id << ", Name: " << name << ", Contact: " << contactInfo
                  << ", Medical History: " << medicalHistory << ", Treatment Plan: " << treatmentPlan << std::endl;
    }
};

#endif // PATIENT_H
