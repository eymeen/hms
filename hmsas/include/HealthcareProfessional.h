#ifndef HEALTHCAREPROFESSIONAL_H
#define HEALTHCAREPROFESSIONAL_H

#include "Person.h"

class HealthcareProfessional : public Person {
public:
    // Constructor
    HealthcareProfessional(int id, const std::string& name, const std::string& contactInfo, const std::string& role);

    // Destructor
    virtual ~HealthcareProfessional();

    // Abstract methods
    virtual void performDuties() const = 0;
};

#endif // HEALTHCAREPROFESSIONAL_H
