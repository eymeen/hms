#include "Person.h"

// Constructor
Person::Person(int id, const std::string& name, const std::string& contactInfo, const std::string& role)
    : id(id), name(name), contactInfo(contactInfo), role(role) {}

// Destructor
Person::~Person() {}

// Getters
int Person::getId() const {
    return id;
}

std::string Person::getName() const {
    return name;
}

std::string Person::getContactInfo() const {
    return contactInfo;
}

std::string Person::getRole() const {
    return role;
}

// Setters
void Person::setId(int id) {
    this->id = id;
}

void Person::setName(const std::string& name) {
    this->name = name;
}

void Person::setContactInfo(const std::string& contactInfo) {
    this->contactInfo = contactInfo;
}

void Person::setRole(const std::string& role) {
    this->role = role;
}
