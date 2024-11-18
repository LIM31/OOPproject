#ifndef MAP_H    // Include guard
#define MAP_H

#include <string>
#include <vector>
#include <iostream>
#include <memory> // For smart pointers

// Weather class to replace Weather enum
class Weather {
public:
    static const Weather SUNNY;
    static const Weather RAINY;
    static const Weather SNOWY;

    // Converts a Weather object to a string
    std::string toString() const;

    // Equality comparison
    bool operator==(const Weather& other) const { return value == other.value; }
    bool operator!=(const Weather& other) const { return value != other.value; }

private:
    explicit Weather(int v, const std::string& name) : value(v), name(name) {}

    int value;                 // Internal integer representation
    std::string name;          // Name of the weather
};

// TimeOfDay class to replace TimeOfDay enum
class TimeOfDay {
public:
    static const TimeOfDay DAY;
    static const TimeOfDay NIGHT;

    // Converts a TimeOfDay object to a string
    std::string toString() const;

    // Equality comparison
    bool operator==(const TimeOfDay& other) const { return value == other.value; }
    bool operator!=(const TimeOfDay& other) const { return value != other.value; }

private:
    explicit TimeOfDay(int v, const std::string& name) : value(v), name(name) {}

    int value;                 // Internal integer representation
    std::string name;          // Name of the time of day
};

// Base class for maps
class MapBase {
public:
    virtual ~MapBase() = default;

    // Pure virtual function to get map details
    virtual std::string getDetails() const = 0;

    // Function to get the name of the map (common to all maps)
    virtual std::string getName() const = 0;
};

// Derived class for specific maps
class Map : public MapBase {
public:
    // Constructor
    Map(const std::string& name, Weather weather, TimeOfDay time_of_day)
        : name(new std::string(name)), weather(weather), time_of_day(time_of_day) {}

    // Big Three
    ~Map() override;                                     // Destructor
    Map(const Map& other);                              // Copy constructor
    Map& operator=(const Map& other);                   // Copy assignment operator

    // Override getDetails to return map details as a string
    std::string getDetails() const override;

    // Override getName to return the map's name
    std::string getName() const override { return *name; }

private:
    std::string* name;  // Using raw pointer to demonstrate Big Three
    Weather weather;
    TimeOfDay time_of_day;
};

// Maps class to manage a collection of maps
class Maps {
public:
    // Constructor
    Maps();

    // Big Three
    ~Maps();                           // Destructor
    Maps(const Maps& other);           // Copy constructor
    Maps& operator=(const Maps& other); // Copy assignment operator

    // Function to display map options and let the player choose one
    void chooseMap() const;

private:
    std::vector<MapBase*> map_list; // Use raw pointers to demonstrate Big Three

    // Function to handle user input for choosing maps
    void handleMapChoice(int choice) const;
};

#endif // MAP_H

