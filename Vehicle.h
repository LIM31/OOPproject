#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

// Enum class for EngineType
enum class EngineType {
    PETROL,
    DIESEL,
    ELECTRIC,
    HYBRID,
    UNKNOWN
};

// Enum class for Color
enum class Color {
    RED,
    BLUE,
    GREEN,
    BLACK,
    WHITE,
    UNKNOWN
};

// Enum class for Size
enum class Size {
    SMALL,
    MEDIUM,
    LARGE,
};

// Vehicle class
class Vehicle {
public:
    // Constructor
    Vehicle(EngineType engine = EngineType::UNKNOWN, Color color = Color::UNKNOWN, Size size = Size::UNKNOWN);

    // Member function to display vehicle information
    void display() const;

    // Member function to customize vehicle
    void customize();

private:
    EngineType engine;  // Engine type
    Color color;        // Color of the vehicle
    Size size;          // Size of the vehicle

    // Helper functions to convert enums to strings for display
    static std::string engineTypeToString(EngineType engine);
    static std::string colorToString(Color color);
    static std::string sizeToString(Size size);
};

#endif // VEHICLE_H
