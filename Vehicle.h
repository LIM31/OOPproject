#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

// EngineType class to replace enum
class EngineType {
public:
    static const EngineType PETROL;
    static const EngineType DIESEL;
    static const EngineType ELECTRIC;
    static const EngineType HYBRID;
    static const EngineType UNKNOWN;

    // Converts EngineType to string
    std::string toString() const;

    // Equality operators
    bool operator==(const EngineType& other) const { return value == other.value; }
    bool operator!=(const EngineType& other) const { return value != other.value; }

private:
    explicit EngineType(int v, const std::string& name) : value(v), name(name) {}
    int value;           // Internal representation
    std::string name;    // Name of the engine type
};

// Color class to replace enum
class Color {
public:
    static const Color RED;
    static const Color BLUE;
    static const Color GREEN;
    static const Color BLACK;
    static const Color WHITE;
    static const Color UNKNOWN;

    // Converts Color to string
    std::string toString() const;

    // Equality operators
    bool operator==(const Color& other) const { return value == other.value; }
    bool operator!=(const Color& other) const { return value != other.value; }

private:
    explicit Color(int v, const std::string& name) : value(v), name(name) {}
    int value;           // Internal representation
    std::string name;    // Name of the color
};

// Size class to replace enum
class Size {
public:
    static const Size SMALL;
    static const Size MEDIUM;
    static const Size LARGE;
    static const Size UNKNOWN;

    // Converts Size to string
    std::string toString() const;

    // Equality operators
    bool operator==(const Size& other) const { return value == other.value; }
    bool operator!=(const Size& other) const { return value != other.value; }

private:
    explicit Size(int v, const std::string& name) : value(v), name(name) {}
    int value;           // Internal representation
    std::string name;    // Name of the size
};

// Vehicle class
class Vehicle {
public:
    // Constructor with default parameters
    Vehicle(EngineType engine = EngineType::UNKNOWN, 
            Color color = Color::UNKNOWN, 
            Size size = Size::UNKNOWN);

    // Big Three
    ~Vehicle();                           // Destructor
    Vehicle(const Vehicle& other);        // Copy constructor
    Vehicle& operator=(const Vehicle& other); // Copy assignment operator

    // Display vehicle information
    void display() const;

    // Customize vehicle
    void customize();

private:
    EngineType* engine;  // Engine type of the vehicle (pointer for Big Three demo)
    Color* color;        // Color of the vehicle (pointer for Big Three demo)
    Size* size;          // Size of the vehicle (pointer for Big Three demo)

    // Helper function for deep copying
    void deepCopy(const Vehicle& other);
};

#endif // VEHICLE_H
