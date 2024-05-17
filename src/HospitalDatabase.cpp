#include "HospitalDatabase.h"

// Constructor
HospitalDatabase::HospitalDatabase() {}

// Destructor
HospitalDatabase::~HospitalDatabase() {
    // Free memory for healthcare professionals
    for (auto professional : healthcareProfessionals) {
        delete professional;
    }

    // Free memory for patients
    for (auto patient : patients) {
        delete patient;
    }

    // Free memory for appointments
    for (auto appointment : appointments) {
        delete appointment;
    }
}

// Add a healthcare professional
void HospitalDatabase::addHealthcareProfessional(HealthcareProfessional* professional) {
    healthcareProfessionals.push_back(professional);
}

// Add a patient
void HospitalDatabase::addPatient(Patient* patient) {
    patients.push_back(patient);
}

// Add an appointment
void HospitalDatabase::addAppointment(Appointment* appointment) {
    appointments.push_back(appointment);
}

// Get all healthcare professionals
std::vector<HealthcareProfessional*> HospitalDatabase::getHealthcareProfessionals() const {
    return healthcareProfessionals;
}

// Get all patients
std::vector<Patient*> HospitalDatabase::getPatients() const {
    return patients;
}

// Get all appointments
std::vector<Appointment*> HospitalDatabase::getAppointments() const {
    return appointments;
}
