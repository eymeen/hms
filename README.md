<div align="center"> 
    
# Mr. Abdulhafez, Please <a href="/REPORT.md">read this report</a>

</div>
<br><br><br>

# Hospital Management System

This is a simple console-based Hospital Management System written in C++ using Object-Oriented Programming concepts such as inheritance, polymorphism, abstract classes, and virtual functions. The system includes functionalities for login, dashboard, patient registration, emergency triage, and billing.

## Features

- Login Screen
- Doctor Dashboard
- Patient Registration
- Emergency Triage (Nurse)
- Billing and Insurance

## How to Run

### Prerequisites

- A C++ compiler (e.g., g++, clang++)
- C++11 or later

### Compilation and Execution

1. Clone the repository or download the source code.
2. Open a terminal and navigate to the directory containing the source files.
3. Compile the source files using the following command:

```sh
g++ -std=c++11 -o hospital main.cpp Database.cpp Appointment.cpp Person.cpp HealthcareProfessional.cpp Doctor.cpp Nurse.cpp Specialist.cpp Patient.cpp
```

4. Run the compiled executable:

```sh
./hospital
```

### Example Login Credentials

- Doctor:
  - Username: `doctor`
  - Password: `password`
- Nurse:
  - Username: `nurse`
  - Password: `password`

## Code Documentation

The code consists of the following main classes:

1. `Person` - An abstract base class representing a person.
2. `Patient` - A derived class representing a patient.
3. `HealthcareProfessional` - An abstract class derived from `Person`, representing healthcare professionals.
4. `Doctor` - A class derived from `HealthcareProfessional`, representing a doctor.
5. `Nurse` - A class derived from `HealthcareProfessional`, representing a nurse.
6. `Specialist` - A class derived from `Doctor`, representing a specialist.
7. `Appointment` - A class representing an appointment.
8. `Database` - A class responsible for managing all data, including persons and appointments.

