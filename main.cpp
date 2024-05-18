#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include "Person.h"
#include "HealthcareProfessional.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Specialist.h"
#include "Patient.h"
#include "Appointment.h"
#include "Database.h"

// Function declarations
void loginScreen(Database& db);
void doctorDashboard(Database& db, std::shared_ptr<Doctor> doctor);
void patientRegistration(Database& db);
void emergencyTriage(Database& db, std::shared_ptr<Nurse> nurse);
void billingAndInsurance(Database& db);

int main() {
    Database db;

    // Adding some dummy data for testing
    std::shared_ptr<Doctor> doc1 = std::make_shared<Doctor>(1, "Dr. Smith", "smith@example.com", "Cardiology", "MWF 9-5", "12345", "Heart Surgery");
    std::shared_ptr<Nurse> nurse1 = std::make_shared<Nurse>(2, "Nurse Joy", "joy@example.com", "General", "MWF 9-5", "N123", "Day Shift");
    std::shared_ptr<Patient> patient1 = std::make_shared<Patient>(4, "John Doe", "john@example.com", "No allergies", "Blood pressure treatment");

    db.addPerson(doc1);
    db.addPerson(nurse1);
    db.addPerson(patient1);

    std::shared_ptr<Appointment> app1 = std::make_shared<Appointment>("2023-05-18 10:00", patient1, doc1);
    db.addAppointment(app1);

    loginScreen(db);

    return 0;
}

void loginScreen(Database& db) {
    std::string username, password;

    std::cout << "Welcome to Hospital Management System\n\n";
    std::cout << "Please enter your username and password to log in:\n";

    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;

    // Dummy authentication (In real system, implement proper authentication)
    if (username == "doctor" && password == "password") {
        std::shared_ptr<Doctor> doctor = std::dynamic_pointer_cast<Doctor>(db.findPersonById(1));
        if (doctor) {
            doctorDashboard(db, doctor);
        }
    } else if (username == "nurse" && password == "password") {
        std::shared_ptr<Nurse> nurse = std::dynamic_pointer_cast<Nurse>(db.findPersonById(2));
        if (nurse) {
            emergencyTriage(db, nurse);
        }
    } else {
        std::cout << "Invalid credentials. Please try again.\n";
        loginScreen(db);
    }
}

void doctorDashboard(Database& db, std::shared_ptr<Doctor> doctor) {
    int choice;
    do {
        std::cout << "\nDashboard - Doctor\n\n";
        std::cout << "Welcome, " << doctor->getName() << "!\n\n";

        std::cout << "Today's Schedule:\n";
        // Display today's schedule (for simplicity, display all appointments)
        for (const auto& appointment : db.getAppointmentsByPersonId(doctor->getId())) {
            appointment->display();
        }

        std::cout << "\nQuick Actions:\n";
        std::cout << "1. View Patient Records\n";
        std::cout << "2. Schedule New Appointment\n";
        std::cout << "3. Update Treatment Plans\n";
        std::cout << "4. Log Out\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                db.displayAllPersons();
                break;
            case 2:
                // Function to schedule new appointment
                break;
            case 3:
                // Function to update treatment plans
                break;
            case 4:
                std::cout << "Logging out...\n";
                return;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
}

void patientRegistration(Database& db) {
    std::string firstName, lastName, dob, gender, contactNumber, address, medicalHistory;

    std::cout << "\nPatient Registration Form\n\n";
    std::cout << "Please enter the following details to register a new patient:\n";

    std::cout << "First Name: ";
    std::cin >> firstName;
    std::cout << "Last Name: ";
    std::cin >> lastName;
    std::cout << "Date of Birth: ";
    std::cin >> dob;
    std::cout << "Gender: ";
    std::cin >> gender;
    std::cout << "Contact Number: ";
    std::cin >> contactNumber;
    std::cout << "Address: ";
    std::cin.ignore();
    std::getline(std::cin, address);
    std::cout << "Medical History: ";
    std::getline(std::cin, medicalHistory);

    // Generate new unique ID
    int newId = 0;
    for (const auto& person : db.getAllPersons()) {
        if (person->getId() > newId) {
            newId = person->getId();
        }
    }
    newId += 1;

    std::shared_ptr<Patient> newPatient = std::make_shared<Patient>(newId, firstName + " " + lastName, contactNumber, medicalHistory, "");

    db.addPerson(newPatient);
    std::cout << "Patient registered successfully!\n";
}

void emergencyTriage(Database& db, std::shared_ptr<Nurse> nurse) {
    std::string patientName, condition, assessmentNotes, gender;
    int patientAge, triageCategory, choice;

    std::cout << "\nEmergency Triage - Nurse\n\n";
    std::cout << "Patient Details:\n";
    std::cout << "Name: ";
    std::cin.ignore();
    std::getline(std::cin, patientName);
    std::cout << "Age: ";
    std::cin >> patientAge;
    std::cout << "Gender: ";
    std::cin >> gender;
    std::cout << "Condition: ";
    std::cin.ignore();
    std::getline(std::cin, condition);

    std::cout << "\nTriage Category:\n";
    std::cout << "1. Red (Critical)\n";
    std::cout << "2. Yellow (Urgent)\n";
    std::cout << "3. Green (Non-Urgent)\n";
    std::cout << "Enter category: ";
    std::cin >> triageCategory;

    std::cout << "Assessment Notes: ";
    std::cin.ignore();
    std::getline(std::cin, assessmentNotes);

    std::cout << "\n1. Assign Doctor\n";
    std::cout << "2. Admit to Emergency Room\n";
    std::cout << "3. Send to Waiting Area\n";
    std::cout << "4. Cancel\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Doctor assigned successfully!\n";
            break;
        case 2:
            std::cout << "Patient admitted to emergency room successfully!\n";
            break;
        case 3:
            std::cout << "Patient sent to waiting area successfully!\n";
            break;
        case 4:
            std::cout << "Operation cancelled.\n";
            return;
        default:
            std::cout << "Invalid choice. Please try again.\n";
    }
}

void billingAndInsurance(Database& db) {
    std::string patientName, insuranceCompany, policyNumber, coverageDetails;
    double consultationFees, medicationCharges, procedureCosts, totalCharges;
    int choice;

    std::cout << "\nBilling and Insurance\n\n";
    std::cout << "Patient Information:\n";
    std::cout << "Name: ";
    std::cin.ignore();
    std::getline(std::cin, patientName);
    std::cout << "Admission Date: ";
    std::string admissionDate;
    std::getline(std::cin, admissionDate);
    std::cout << "Discharge Date: ";
    std::string dischargeDate;
    std::getline(std::cin, dischargeDate);

    std::cout << "Total Charges: ";
    std::cin >> totalCharges;

    std::cout << "\nInsurance Details:\n";
    std::cout << "Insurance Company: ";
    std::cin.ignore();
    std::getline(std::cin, insuranceCompany);
    std::cout << "Policy Number: ";
    std::getline(std::cin, policyNumber);
    std::cout << "Coverage Details: ";
    std::getline(std::cin, coverageDetails);

    std::cout << "\nBilling Details:\n";
    std::cout << "Consultation Fees: ";
    std::cin >> consultationFees;
    std::cout << "Medication Charges: ";
    std::cin >> medicationCharges;
    std::cout << "Procedure Costs: ";
    std::cin >> procedureCosts;

    totalCharges = consultationFees + medicationCharges + procedureCosts;
    std::cout << "Total Due: " << totalCharges << "\n";

    std::cout << "\n1. Submit Payment\n";
    std::cout << "2. Print Invoice\n";
    std::cout << "3. Cancel\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Payment submitted successfully!\n";
            // In a real system, you would implement payment processing here
            break;
        case 2:
            std::cout << "Invoice printed successfully!\n";
            // In a real system, you would implement invoice printing here
            break;
        case 3:
            std::cout << "Operation cancelled.\n";
            return;
        default:
            std::cout << "Invalid choice. Please try again.\n";
    }
}
