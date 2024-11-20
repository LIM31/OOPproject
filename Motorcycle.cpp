#include "Motorcycle.h"
#include <iostream>

// Constructor
Motorcycle::Motorcycle() : Vehicle("Motorcycle"), engine("Unknown"), color("Unknown") {}

// Display motorcycle details
void Motorcycle::display() const {
    std::cout << "Vehicle Type: " << type << "\n";
    std::cout << "Engine: " << engine.getType() << "\n";
    std::cout << "Color: " << color.getColor() << "\n";
}

// Customize the motorcycle
void Motorcycle::customize() {
    int choice;

    // Choose engine type
    std::cout << "Select Engine Type:\n1. Petrol\n2. Electric\n";
    std::cin >> choice;
    switch (choice) {
        case 1: engine.setType("Petrol"); break;
        case 2: engine.setType("Electric"); break;
        default: engine.setType("Unknown");
    }

    // Choose color
    std::cout << "Select Color:\n1. Red\n2. Blue\n3. Black\n";
    std::cin >> choice;
    switch (choice) {
        case 1: color.setColor("Red"); break;
        case 2: color.setColor("Blue"); break;
        case 3: color.setColor("Black"); break;
        default: color.setColor("Unknown");
    }
}
