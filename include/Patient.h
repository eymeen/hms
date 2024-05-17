#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
private:
    int id;
    std::string firstName;
    std::string lastName;
    std::string dateOfBirth;
    std::string gender;
    std::string contactNumber;
    std::string address;
    std::string medicalHistory;

public:
    // Constructor
    Patient(int id, const std::string& firstName, const std::string& lastName, const std::string& dateOfBirth, const std::string& gender,
            const std::string& contactNumber, const std::string& address, const std::string& medicalHistory);

    // Destructor
    ~Patient();

    // Getters
    int getId() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getDateOfBirth() const;
    std::string getGender() const;
    std::string getContactNumber() const;
    std::string getAddress() const;
    std::string getMedicalHistory() const;

    // Setters
    void setId(int id);
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setDateOfBirth(const std::string& dateOfBirth);
    void setGender(const std::string& gender);
    void setContactNumber(const std::string& contactNumber);
    void setAddress(const std::string& address);
    void setMedicalHistory(const std::string& medicalHistory);
};

#endif // PATIENT_H
