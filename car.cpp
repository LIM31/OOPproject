#include "Car.h"
#include <iostream>

// Constructor
Car::Car() : Vehicle("Car"), engine("Unknown"), color("Unknown"), size("Unknown") {}

// Display car information
void Car::display() const {
    std::cout << "Vehicle Type: " << type << "\n";
    std::cout << "Engine: " << engine << "\n";
    std::cout << "Color: " << color << "\n";
    std::cout << "Size: " << size << "\n";
}

// Customize the car
void Car::customize() {
    int choice;

    std::cout << "Customize your car:\n";

    // Choose engine type
    std::cout << "Select Engine Type:\n1. Petrol\n2. Diesel\n3. Electric\n4. Hybrid\n";
    std::cin >> choice;
    switch (choice) {
        case 1: setEngine("Petrol"); break;
        case 2: setEngine("Diesel"); break;
        case 3: setEngine("Electric"); break;
        case 4: setEngine("Hybrid"); break;
        default: setEngine("Unknown");
    }

    // Choose color
    std::cout << "Select Color:\n1. Red\n2. Blue\n3. Green\n4. Black\n5. White\n";
    std::cin >> choice;
    switch (choice) {
        case 1: setColor("Red"); break;
        case 2: setColor("Blue"); break;
        case 3: setColor("Green"); break;
        case 4: setColor("Black"); break;
        case 5: setColor("White"); break;
        default: setColor("Unknown");
    }

    // Choose size
    std::cout << "Select Size:\n1. Small\n2. Medium\n3. Large\n";
    std::cin >> choice;
    switch (choice) {
        case 1: setSize("Small"); break;
        case 2: setSize("Medium"); break;
        case 3: setSize("Large"); break;
        default: setSize("Unknown");
    }
}

// Getters and Setters
std::string Car::getEngine() const { return engine; }
void Car::setEngine(const std::string& newEngine) { engine = newEngine; }

std::string Car::getColor() const { return color; }
void Car::setColor(const std::string& newColor) { color = newColor; }

std::string Car::getSize() const { return size; }
void Car::setSize(const std::string& newSize) { size = newSize; }
