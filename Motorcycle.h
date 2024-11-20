#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"
#include "EngineType.h"
#include "Color.h"

class Motorcycle : public Vehicle {
public:
    // Constructor
    Motorcycle();

    // Override display function
    void display() const override;

    // Override customize function
    void customize() override;

private:
    EngineType engine; // Encapsulated engine type
    Color color;       // Encapsulated color
};

#endif // MOTORCYCLE_H
