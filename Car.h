#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    // Constructor
    Car();

    // Override display function
    void display() const override;

    // Override customize function
    void customize() override;

    // Getter and Setter methods for encapsulation
    std::string getEngine() const;
    void setEngine(const std::string& newEngine);

    std::string getColor() const;
    void setColor(const std::string& newColor);

    std::string getSize() const;
    void setSize(const std::string& newSize);

private:
    std::string engine; // Engine type (e.g., Petrol, Diesel)
    std::string color;  // Color of the car
    std::string size;   // Size of the car (e.g., Small, Medium, Large)
};

#endif // CAR_H
