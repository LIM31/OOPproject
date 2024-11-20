#include "EngineType.h"

// Constructor
EngineType::EngineType(const std::string& type) : type(type) {}

// Getter
std::string EngineType::getType() const {
    return type;
}

// Setter with validation
void EngineType::setType(const std::string& type) {
    if (type == "Petrol" || type == "Electric" || type == "Diesel" || type == "Hybrid") {
        this->type = type;
    } else {
        std::cerr << "Invalid engine type. Setting to 'Unknown'.\n";
        this->type = "Unknown";
    }
}
