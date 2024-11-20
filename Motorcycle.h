#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle : public Vehicle {
public:
    // Constructor
    Motorcycle();

    // Override display function
    void display() const override;

    // Override customize function
    void customize() override;

    // Getter and Setter methods for encapsulation
    std::string getEngine() const;
    void setEngine(const std::string& newEngine);

    std::string getColor() const;
    void setColor(const std::string& newColor);

private:
    std::string engine; // Engine type (e.g., Petrol, Electric)
    std::string color;  // Color of the motorcycle
};

#endif // MOTORCYCLE_H
