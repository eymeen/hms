#ifndef SPECIALIST_H
#define SPECIALIST_H

#include "HealthcareProfessional.h"

class Specialist : public HealthcareProfessional {
private:
    std::string subSpecialty;
    std::string availability;

public:
    // Constructor
    Specialist(int id, const std::string& name, const std::string& contactInfo, const std::string& subSpecialty, const std::string& availability);

    // Destructor
    virtual ~Specialist();

    // Getter for sub-specialty
    std::string getSubSpecialty() const;

    // Getter for availability
    std::string getAvailability() const;

    // Setter for sub-specialty
    void setSubSpecialty(const std::string& subSpecialty);

    // Setter for availability
    void setAvailability(const std::string& availability);

    // Overridden method from HealthcareProfessional
    virtual void performDuties() const override;
};

#endif // SPECIALIST_H
