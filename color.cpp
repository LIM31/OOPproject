#include "Color.h"

// Constructor
Color::Color(const std::string& color) : color(color) {}

// Getter
std::string Color::getColor() const {
    return color;
}

// Setter with validation
void Color::setColor(const std::string& color) {
    if (color == "Red" || color == "Blue" || color == "Black" || color == "White" || color == "Green") {
        this->color = color;
    } else {
        std::cerr << "Invalid color. Setting to 'Unknown'.\n";
        this->color = "Unknown";
    }
}
