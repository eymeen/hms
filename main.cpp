#include <iostream>
#include <memory>
#include "include/Person.h"
#include "include/HealthcareProfessional.h"
#include "include/Doctor.h"
#include "include/Nurse.h"
#include "include/Specialist.h"
#include "include/Patient.h"
#include "include/Appointment.h"
#include "include/Database.h"

int main() {
    // Create a database instance
    Database db;

    // Create some healthcare professionals
    std::shared_ptr<Doctor> doc1 = std::make_shared<Doctor>(1, "Dr. Smith", "smith@example.com", "Cardiology", "MWF 9-5", "12345", "Heart Surgery");
    std::shared_ptr<Nurse> nurse1 = std::make_shared<Nurse>(2, "Nurse Joy", "joy@example.com", "General", "MWF 9-5", "N123", "Day Shift");
    std::shared_ptr<Specialist> spec1 = std::make_shared<Specialist>(3, "Dr. Adams", "adams@example.com", "Neurology", "TTh 10-4", "Brain Surgery", "TTh 10-4");

    // Create some patients
    std::shared_ptr<Patient> patient1 = std::make_shared<Patient>(4, "John Doe", "john@example.com", "No allergies", "Blood pressure treatment");
    std::shared_ptr<Patient> patient2 = std::make_shared<Patient>(5, "Jane Roe", "jane@example.com", "Diabetes", "Insulin treatment");

    // Add persons to the database
    db.addPerson(doc1);
    db.addPerson(nurse1);
    db.addPerson(spec1);
    db.addPerson(patient1);
    db.addPerson(patient2);

    // Create some appointments
    std::shared_ptr<Appointment> app1 = std::make_shared<Appointment>("2023-05-18 10:00", patient1, doc1);
    std::shared_ptr<Appointment> app2 = std::make_shared<Appointment>("2023-05-18 11:00", patient2, spec1);

    // Add appointments to the database
    db.addAppointment(app1);
    db.addAppointment(app2);

    // Display all persons
    std::cout << "All Persons in Database:" << std::endl;
    db.displayAllPersons();
    std::cout << std::endl;

    // Display all appointments
    std::cout << "All Appointments in Database:" << std::endl;
    db.displayAllAppointments();
    std::cout << std::endl;

    // Find and display a specific person by ID
    std::shared_ptr<Person> foundPerson = db.findPersonById(4);
    if (foundPerson) {
        std::cout << "Found Person with ID 4:" << std::endl;
        foundPerson->display();
        std::cout << std::endl;
    }

    // Get and display appointments for a specific person by ID
    std::vector<std::shared_ptr<Appointment>> appointments = db.getAppointmentsByPersonId(4);
    std::cout << "Appointments for Person with ID 4:" << std::endl;
    for (const auto& appointment : appointments) {
        appointment->display();
    }
    std::cout << std::endl;

    return 0;
}
