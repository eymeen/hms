#include "HealthcareProfessional.h"

// Constructor
HealthcareProfessional::HealthcareProfessional(int id, const std::string& name, const std::string& contactInfo, const std::string& role)
    : Person(id, name, contactInfo, role) {}

// Destructor
HealthcareProfessional::~HealthcareProfessional() {}
