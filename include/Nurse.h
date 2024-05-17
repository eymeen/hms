#ifndef NURSE_H
#define NURSE_H

#include "HealthcareProfessional.h"

class Nurse : public HealthcareProfessional {
private:
    std::string certification;
    std::string shiftSchedule;

public:
    // Constructor
    Nurse(int id, const std::string& name, const std::string& contactInfo, const std::string& certification, const std::string& shiftSchedule);

    // Destructor
    virtual ~Nurse();

    // Getter for certification
    std::string getCertification() const;

    // Getter for shift schedule
    std::string getShiftSchedule() const;

    // Setter for certification
    void setCertification(const std::string& certification);

    // Setter for shift schedule
    void setShiftSchedule(const std::string& shiftSchedule);

    // Overridden method from HealthcareProfessional
    virtual void performDuties() const override;
};

#endif // NURSE_H
