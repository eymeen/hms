#include <iostream>
#include <string>
#include "Doctor.h"
#include "Nurse.h"
#include "Specialist.h"
#include "Appointment.h"
#include "Patient.h"

// int main() {
//     // Create a doctor
//     Doctor doctor(1, "John Doe", "123-456-7890", "MD123456", "Cardiology");

//     // Create a nurse
//     Nurse nurse(2, "Jane Smith", "987-654-3210", "RN123", "Day Shift");

//     // Create a specialist
//     Specialist specialist(3, "Alice Johnson", "456-789-0123", "Neurology", "Monday - Friday");

//     // Display information about healthcare professionals
//     std::cout << "Doctor Information:" << std::endl;
//     std::cout << "Name: " << doctor.getName() << std::endl;
//     std::cout << "License Number: " << doctor.getLicenseNumber() << std::endl;
//     std::cout << "Expertise: " << doctor.getExpertise() << std::endl;

//     std::cout << "\nNurse Information:" << std::endl;
//     std::cout << "Name: " << nurse.getName() << std::endl;
//     std::cout << "Certification: " << nurse.getCertification() << std::endl;
//     std::cout << "Shift Schedule: " << nurse.getShiftSchedule() << std::endl;

//     std::cout << "\nSpecialist Information:" << std::endl;
//     std::cout << "Name: " << specialist.getName() << std::endl;
//     std::cout << "Sub-specialty: " << specialist.getSubSpecialty() << std::endl;
//     std::cout << "Availability: " << specialist.getAvailability() << std::endl;

//     // Create an appointment
//     Appointment appointment(1, "2024-05-25 10:00", "Alice Johnson", "Consultation");

//     // Display appointment information
//     std::cout << "\nAppointment Information:" << std::endl;
//     std::cout << "Date & Time: " << appointment.getDateTime() << std::endl;
//     std::cout << "Patient Name: " << appointment.getPatientName() << std::endl;
//     std::cout << "Purpose: " << appointment.getPurpose() << std::endl;

//     // Create a patient
//     Patient patient(1, "John", "Doe", "1990-01-01", "Male", "123-456-7890", "123 Street, City", "None");

//     // Display patient information
//     std::cout << "\nPatient Information:" << std::endl;
//     std::cout << "Name: " << patient.getFirstName() << " " << patient.getLastName() << std::endl;
//     std::cout << "Date of Birth: " << patient.getDateOfBirth() << std::endl;
//     std::cout << "Gender: " << patient.getGender() << std::endl;
//     std::cout << "Contact Number: " << patient.getContactNumber() << std::endl;
//     std::cout << "Address: " << patient.getAddress() << std::endl;
//     std::cout << "Medical History: " << patient.getMedicalHistory() << std::endl;

//     return 0;
// }


using namespace std;

void displayLoginScreen() {
    cout << "Welcome to Hospital Management System\n\n";
    cout << "Please enter your username and password to log in:\n\n";
    cout << "Username: [Input Field]\n";
    cout << "Password: [Input Field]\n\n";
    cout << "[Login Button]  [Forgot Password? Link]  [Create New Account Link]\n\n";
}

void displayDoctorDashboard(const string& doctorName) {
    cout << "Dashboard - Doctor\n\n";
    cout << "Welcome, Dr. " << doctorName << "!\n\n";
    cout << "Today's Schedule:\n";
    cout << "- [Time]: Appointment with [Patient Name]\n";
    cout << "- [Time]: Surgery for [Patient Name]\n";
    cout << "- [Time]: Staff Meeting\n\n";
    cout << "Upcoming Appointments:\n";
    cout << "1. [Date & Time]: [Patient Name] - [Purpose]\n";
    cout << "2. [Date & Time]: [Patient Name] - [Purpose]\n";
    cout << "3. [Date & Time]: [Patient Name] - [Purpose]\n\n";
    cout << "Quick Actions:\n";
    cout << "- View Patient Records\n";
    cout << "- Schedule New Appointment\n";
    cout << "- Update Treatment Plans\n";
    cout << "- Log Out\n\n";
}

void displayPatientRegistrationScreen() {
    cout << "Patient Registration Form\n\n";
    cout << "Please enter the following details to register a new patient:\n\n";
    cout << "First Name: [Input Field]\n";
    cout << "Last Name: [Input Field]\n";
    cout << "Date of Birth: [Date Picker]\n";
    cout << "Gender: [Dropdown - Male/Female/Other]\n";
    cout << "Contact Number: [Input Field]\n";
    cout << "Address: [Textarea]\n";
    cout << "Medical History: [Textarea for Medical History]\n\n";
    cout << "[Submit Button]  [Cancel Button]\n\n";
}

void displayEmergencyTriageScreen() {
    cout << "Emergency Triage - Nurse\n\n";
    cout << "Patient Details:\n";
    cout << "- Name: [Patient Name]\n";
    cout << "- Age: [Patient Age]\n";
    cout << "- Gender: [Patient Gender]\n";
    cout << "- Condition: [Brief Description of Condition]\n\n";
    cout << "Triage Category:\n";
    cout << "- Red (Critical)\n";
    cout << "- Yellow (Urgent)\n";
    cout << "- Green (Non-Urgent)\n\n";
    cout << "Assessment Notes:\n";
    cout << "[Textarea for Nurse's Assessment]\n\n";
    cout << "[Assign Doctor Button]  [Admit to Emergency Room Button]  [Send to Waiting Area Button]  [Cancel Button]\n\n";
}

void displayBillingAndInsuranceScreen() {
    cout << "Billing and Insurance\n\n";
    cout << "Patient Information:\n";
    cout << "- Name: [Patient Name]\n";
    cout << "- Admission Date: [Date]\n";
    cout << "- Discharge Date: [Date]\n";
    cout << "- Total Charges: [Amount]\n\n";
    cout << "Insurance Details:\n";
    cout << "- Insurance Company: [Input Field]\n";
    cout << "- Policy Number: [Input Field]\n";
    cout << "- Coverage Details: [Textarea]\n\n";
    cout << "Billing Details:\n";
    cout << "- Consultation Fees: [Amount]\n";
    cout << "- Medication Charges: [Amount]\n";
    cout << "- Procedure Costs: [Amount]\n";
    cout << "- Total Due: [Amount]\n\n";
    cout << "[Submit Payment Button]  [Print Invoice Button]  [Cancel Button]\n\n";
}

int main() {
    // Display login screen
    displayLoginScreen();

    // Simulate doctor's dashboard
    string doctorName = "John Doe";
    displayDoctorDashboard(doctorName);

    // Simulate patient registration screen
    displayPatientRegistrationScreen();

    // Simulate emergency triage screen
    displayEmergencyTriageScreen();

    // Simulate billing and insurance screen
    displayBillingAndInsuranceScreen();

    return 0;
}
