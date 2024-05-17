#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    int id;
    std::string name;
    std::string contactInfo;
    std::string role;

public:
    // Constructor
    Person(int id, const std::string& name, const std::string& contactInfo, const std::string& role);

    // Destructor
    virtual ~Person();

    // Getters
    int getId() const;
    std::string getName() const;
    std::string getContactInfo() const;
    std::string getRole() const;

    // Setters
    void setId(int id);
    void setName(const std::string& name);
    void setContactInfo(const std::string& contactInfo);
    void setRole(const std::string& role);
};

#endif // PERSON_H
