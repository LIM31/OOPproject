#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

// Base Vehicle class
class Vehicle {
public:
    // Constructor
    Vehicle(const std::string& type = "Unknown");

    // Virtual Destructor
    virtual ~Vehicle();

    // Pure virtual functions to enforce polymorphism
    virtual void display() const = 0;
    virtual void customize() = 0;

protected:
    std::string type; // Type of the vehicle (e.g., Car, Motorcycle)
};

#endif // VEHICLE_H
