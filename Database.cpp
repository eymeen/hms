#include "Database.h"
#include <iostream>

void Database::addPerson(std::shared_ptr<Person> person) {
    persons.push_back(person);
}

void Database::addAppointment(std::shared_ptr<Appointment> appointment) {
    appointments.push_back(appointment);
}

void Database::displayAllPersons() const {
    for (const auto& person : persons) {
        person->display();
    }
}

void Database::displayAllAppointments() const {
    for (const auto& appointment : appointments) {
        appointment->display();
    }
}

std::shared_ptr<Person> Database::findPersonById(int id) const {
    for (const auto& person : persons) {
        if (person->getId() == id) {
            return person;
        }
    }
    return nullptr;
}

std::vector<std::shared_ptr<Appointment>> Database::getAppointmentsByPersonId(int id) const {
    std::vector<std::shared_ptr<Appointment>> result;
    for (const auto& appointment : appointments) {
        if (appointment->getPatient()->getId() == id || appointment->getHealthcareProfessional()->getId() == id) {
            result.push_back(appointment);
        }
    }
    return result;
}

std::vector<std::shared_ptr<Person>> Database::getAllPersons() const {
    return persons;
}
