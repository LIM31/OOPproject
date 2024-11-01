#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

// Vehicle class
class Vehicle {
public:
    // Constructor
    Vehicle(const std::string& engine = "Unknown", const std::string& color = "Unknown", const std::string& size = "Unknown");

    // Member function to display vehicle information
    void display() const;

    // Member function to customize vehicle
    void customize();

private:
    std::string engine;  // Engine type
    std::string color;   // Color of the vehicle
    std::string size;    // Size of the vehicle
};

#endif // VEHICLE_H
