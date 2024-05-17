#include "Patient.h"

// Constructor
Patient::Patient(int id, const std::string& firstName, const std::string& lastName, const std::string& dateOfBirth, const std::string& gender,
                 const std::string& contactNumber, const std::string& address, const std::string& medicalHistory)
    : id(id), firstName(firstName), lastName(lastName), dateOfBirth(dateOfBirth), gender(gender),
      contactNumber(contactNumber), address(address), medicalHistory(medicalHistory) {}

// Destructor
Patient::~Patient() {}

// Getters
int Patient::getId() const {
    return id;
}

std::string Patient::getFirstName() const {
    return firstName;
}

std::string Patient::getLastName() const {
    return lastName;
}

std::string Patient::getDateOfBirth() const {
    return dateOfBirth;
}

std::string Patient::getGender() const {
    return gender;
}

std::string Patient::getContactNumber() const {
    return contactNumber;
}

std::string Patient::getAddress() const {
    return address;
}

std::string Patient::getMedicalHistory() const {
    return medicalHistory;
}

// Setters
void Patient::setId(int id) {
    this->id = id;
}

void Patient::setFirstName(const std::string& firstName) {
    this->firstName = firstName;
}

void Patient::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Patient::setDateOfBirth(const std::string& dateOfBirth) {
    this->dateOfBirth = dateOfBirth;
}

void Patient::setGender(const std::string& gender) {
    this->gender = gender;
}

void Patient::setContactNumber(const std::string& contactNumber) {
    this->contactNumber = contactNumber;
}

void Patient::setAddress(const std::string& address) {
    this->address = address;
}

void Patient::setMedicalHistory(const std::string& medicalHistory) {
    this->medicalHistory = medicalHistory;
}
