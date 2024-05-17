#ifndef HOSPITALDATABASE_H
#define HOSPITALDATABASE_H

#include <vector>
#include "HealthcareProfessional.h"
#include "Patient.h"
#include "Appointment.h"

class HospitalDatabase {
private:
    std::vector<HealthcareProfessional*> healthcareProfessionals;
    std::vector<Patient*> patients;
    std::vector<Appointment*> appointments;

public:
    // Constructor
    HospitalDatabase();

    // Destructor
    ~HospitalDatabase();

    // Add a healthcare professional
    void addHealthcareProfessional(HealthcareProfessional* professional);

    // Add a patient
    void addPatient(Patient* patient);

    // Add an appointment
    void addAppointment(Appointment* appointment);

    // Get all healthcare professionals
    std::vector<HealthcareProfessional*> getHealthcareProfessionals() const;

    // Get all patients
    std::vector<Patient*> getPatients() const;

    // Get all appointments
    std::vector<Appointment*> getAppointments() const;
};

#endif // HOSPITALDATABASE_H
