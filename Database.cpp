#include "Database.h"

// Add a person to the database
void Database::addPerson(std::shared_ptr<Person> person) {
    persons.push_back(person);
}

// Add an appointment to the database
void Database::addAppointment(std::shared_ptr<Appointment> appointment) {
    appointments.push_back(appointment);
}

// Find a person by ID
std::shared_ptr<Person> Database::findPersonById(int id) const {
    for (const auto& person : persons) {
        if (person->getId() == id) {
            return person;
        }
    }
    return nullptr;
}

// Get all appointments for a specific person by ID
std::vector<std::shared_ptr<Appointment>> Database::getAppointmentsByPersonId(int id) const {
    std::vector<std::shared_ptr<Appointment>> personAppointments;
    for (const auto& appointment : appointments) {
        if (appointment->getPatient()->getId() == id || appointment->getHealthcareProfessional()->getId() == id) {
            personAppointments.push_back(appointment);
        }
    }
    return personAppointments;
}

// Display all persons in the database
void Database::displayAllPersons() const {
    for (const auto& person : persons) {
        person->display();
    }
}

// Display all appointments in the database
void Database::displayAllAppointments() const {
    for (const auto& appointment : appointments) {
        appointment->display();
    }
}
