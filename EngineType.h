#ifndef ENGINETYPE_H
#define ENGINETYPE_H

#include <string>
#include <iostream>

class EngineType {
public:
    // Constructor
    EngineType(const std::string& type = "Unknown");

    // Getter
    std::string getType() const;

    // Setter with validation
    void setType(const std::string& type);

private:
    std::string type; // Type of engine (e.g., Petrol, Electric)
};

#endif // ENGINETYPE_H
