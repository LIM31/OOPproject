// character.h

#ifndef CHARACTER_H   // Include guard
#define CHARACTER_H

#include <string>

// Enum class for Gender (no "Other" option)
enum class Gender {
    MALE,
    FEMALE
};

// Struct for Facial Features
struct FacialFeatures {
    int eye_size;           // Eye size (1-10 scale)
    int nose_size;          // Nose size (1-10 scale)
    int mouth_size;         // Mouth size (1-10 scale)

    // Constructor to initialize facial features
    FacialFeatures(int eye = 5, int nose = 5, int mouth = 5)
        : eye_size(eye), nose_size(nose), mouth_size(mouth) {}
};

// Character class
class Character {
public:
    // Constructor
    Character(const std::string& hairColor = "Unknown", Gender gender = Gender::MALE, const FacialFeatures& features = {});

    // Member function to display character information
    void describe() const;

    // Member function to customize character
    void customize();

private:
    std::string hair_color;  // Hair color
    Gender gender;           // Gender
    FacialFeatures face;     // Facial features

    // Helper function to get gender input
    static Gender getGenderFromInput(int input);
};

#endif // CHARACTER_H

