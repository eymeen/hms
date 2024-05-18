#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
protected:
    int id;
    std::string name;
    std::string contactInfo;
    std::string role;

public:
    Person(int id, const std::string& name, const std::string& contactInfo, const std::string& role)
        : id(id), name(name), contactInfo(contactInfo), role(role) {}

    virtual ~Person() = default;

    int getId() const { return id; }
    std::string getName() const { return name; }
    std::string getContactInfo() const { return contactInfo; }
    std::string getRole() const { return role; }

    virtual void display() const {
        std::cout << "ID: " << id << ", Name: " << name << ", Contact: " << contactInfo << ", Role: " << role << std::endl;
    }
};

#endif // PERSON_H
