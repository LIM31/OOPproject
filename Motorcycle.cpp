#include "Motorcycle.h"
#include <iostream>

// Constructor
Motorcycle::Motorcycle() : Vehicle("Motorcycle"), engine("Unknown"), color("Unknown") {}

// Display motorcycle information
void Motorcycle::display() const {
    std::cout << "Vehicle Type: " << type << "\n";
    std::cout << "Engine: " << engine << "\n";
    std::cout << "Color: " << color << "\n";
}

// Customize the motorcycle
void Motorcycle::customize() {
    int choice;

    std::cout << "Customize your motorcycle:\n";

    // Choose engine type
    std::cout << "Select Engine Type:\n1. Petrol\n2. Electric\n";
    std::cin >> choice;
    switch (choice) {
        case 1: setEngine("Petrol"); break;
        case 2: setEngine("Electric"); break;
        default: setEngine("Unknown");
    }

    // Choose color
    std::cout << "Select Color:\n1. Red\n2. Blue\n3. Black\n";
    std::cin >> choice;
    switch (choice) {
        case 1: setColor("Red"); break;
        case 2: setColor("Blue"); break;
        case 3: setColor("Black"); break;
        default: setColor("Unknown");
    }
}

// Getters and Setters
std::string Motorcycle::getEngine() const { return engine; }
void Motorcycle::setEngine(const std::string& newEngine) { engine = newEngine; }

std::string Motorcycle::getColor() const { return color; }
void Motorcycle::setColor(const std::string& newColor) { color = newColor; }
