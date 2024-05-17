#include "Appointment.h"

// Constructor
Appointment::Appointment(int id, const std::string& dateTime, const std::string& patientName, const std::string& purpose)
    : id(id), dateTime(dateTime), patientName(patientName), purpose(purpose) {}

// Destructor
Appointment::~Appointment() {}

// Getters
int Appointment::getId() const {
    return id;
}

std::string Appointment::getDateTime() const {
    return dateTime;
}

std::string Appointment::getPatientName() const {
    return patientName;
}

std::string Appointment::getPurpose() const {
    return purpose;
}

// Setters
void Appointment::setId(int id) {
    this->id = id;
}

void Appointment::setDateTime(const std::string& dateTime) {
    this->dateTime = dateTime;
}

void Appointment::setPatientName(const std::string& patientName) {
    this->patientName = patientName;
}

void Appointment::setPurpose(const std::string& purpose) {
    this->purpose = purpose;
}
