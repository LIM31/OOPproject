#ifndef COLOR_H
#define COLOR_H

#include <string>
#include <iostream>

class Color {
public:
    // Constructor
    Color(const std::string& color = "Unknown");

    // Getter
    std::string getColor() const;

    // Setter with validation
    void setColor(const std::string& color);

private:
    std::string color; // Color of the object (e.g., Red, Blue, Black)
};

#endif // COLOR_H
