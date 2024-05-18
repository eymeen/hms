#ifndef NURSE_H
#define NURSE_H

#include "HealthcareProfessional.h"

class Nurse : public HealthcareProfessional {
private:
    std::string certification;
    std::string shiftSchedule;

public:
    Nurse(int id, const std::string& name, const std::string& contactInfo, const std::string& specialty, const std::string& schedule, const std::string& certification, const std::string& shiftSchedule)
        : HealthcareProfessional(id, name, contactInfo, specialty, schedule), certification(certification), shiftSchedule(shiftSchedule) {}

    std::string getCertification() const { return certification; }
    std::string getShiftSchedule() const { return shiftSchedule; }

    void display() const override {
        HealthcareProfessional::display();
        std::cout << "Certification: " << certification << ", Shift Schedule: " << shiftSchedule << std::endl;
    }
};

#endif // NURSE_H
