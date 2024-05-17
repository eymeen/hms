#include "Specialist.h"

// Constructor
Specialist::Specialist(int id, const std::string& name, const std::string& contactInfo, const std::string& subSpecialty, const std::string& availability)
    : HealthcareProfessional(id, name, contactInfo, "Specialist"), subSpecialty(subSpecialty), availability(availability) {}

// Destructor
Specialist::~Specialist() {}

// Getter for sub-specialty
std::string Specialist::getSubSpecialty() const {
    return subSpecialty;
}

// Getter for availability
std::string Specialist::getAvailability() const {
    return availability;
}

// Setter for sub-specialty
void Specialist::setSubSpecialty(const std::string& subSpecialty) {
    this->subSpecialty = subSpecialty;
}

// Setter for availability
void Specialist::setAvailability(const std::string& availability) {
    this->availability = availability;
}

// Overridden method from HealthcareProfessional
void Specialist::performDuties() const {
    // Implement duties specific to specialists
    // For example: performing complex procedures, providing consultations, etc.
}
