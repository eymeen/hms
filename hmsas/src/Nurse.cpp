#include "Nurse.h"

// Constructor
Nurse::Nurse(int id, const std::string& name, const std::string& contactInfo, const std::string& certification, const std::string& shiftSchedule)
    : HealthcareProfessional(id, name, contactInfo, "Nurse"), certification(certification), shiftSchedule(shiftSchedule) {}

// Destructor
Nurse::~Nurse() {}

// Getter for certification
std::string Nurse::getCertification() const {
    return certification;
}

// Getter for shift schedule
std::string Nurse::getShiftSchedule() const {
    return shiftSchedule;
}

// Setter for certification
void Nurse::setCertification(const std::string& certification) {
    this->certification = certification;
}

// Setter for shift schedule
void Nurse::setShiftSchedule(const std::string& shiftSchedule) {
    this->shiftSchedule = shiftSchedule;
}

// Overridden method from HealthcareProfessional
void Nurse::performDuties() const {
    // Implement duties specific to nurses
    // For example: monitoring patients, administering medications, assisting doctors, etc.
}
