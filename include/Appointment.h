#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>

class Appointment {
private:
    int id;
    std::string dateTime;
    std::string patientName;
    std::string purpose;

public:
    // Constructor
    Appointment(int id, const std::string& dateTime, const std::string& patientName, const std::string& purpose);

    // Destructor
    ~Appointment();

    // Getters
    int getId() const;
    std::string getDateTime() const;
    std::string getPatientName() const;
    std::string getPurpose() const;

    // Setters
    void setId(int id);
    void setDateTime(const std::string& dateTime);
    void setPatientName(const std::string& patientName);
    void setPurpose(const std::string& purpose);
};

#endif // APPOINTMENT_H
