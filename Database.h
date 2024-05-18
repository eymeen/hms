#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <memory>
#include <vector>
#include "Person.h"
#include "Appointment.h"

class Database {
private:
    std::vector<std::shared_ptr<Person>> persons;
    std::vector<std::shared_ptr<Appointment>> appointments;

public:
    void addPerson(std::shared_ptr<Person> person);
    void addAppointment(std::shared_ptr<Appointment> appointment);
    void displayAllPersons() const;
    void displayAllAppointments() const;
    std::shared_ptr<Person> findPersonById(int id) const;
    std::vector<std::shared_ptr<Appointment>> getAppointmentsByPersonId(int id) const;
    std::vector<std::shared_ptr<Person>> getAllPersons() const;  // Add this line
};

#endif // DATABASE_H
