#ifndef MAP_H
#define MAP_H

#include <string>
#include <vector>
#include <memory>

// Base class for all maps
class MapBase {
public:
    virtual ~MapBase() = default;             // Virtual destructor for polymorphic cleanup
    virtual std::string getDetails() const = 0; // Pure virtual function
    virtual std::string getName() const = 0;  // Pure virtual function
};

// Weather class
class Weather {
public:
    static const Weather SUNNY;
    static const Weather RAINY;
    static const Weather SNOWY;

    std::string toString() const;

private:
    Weather(int v, const std::string& name) : value(v), name(name) {}
    int value;            // Internal representation
    std::string name;     // Name of the weather
};

// TimeOfDay class
class TimeOfDay {
public:
    static const TimeOfDay DAY;
    static const TimeOfDay NIGHT;

    std::string toString() const;

private:
    TimeOfDay(int v, const std::string& name) : value(v), name(name) {}
    int value;            // Internal representation
    std::string name;     // Name of the time of day
};

// Derived class for a specific map
class Map : public MapBase {
public:
    // Constructor
    Map(const std::string& name, const Weather& weather, const TimeOfDay& time_of_day);

    // Big Three
    ~Map() override;
    Map(const Map& other);
    Map& operator=(const Map& other);

    // Overridden methods
    std::string getDetails() const override;
    std::string getName() const override;

private:
    std::string* name;      // Dynamically allocated for demonstration
    Weather weather;        // Weather object
    TimeOfDay time_of_day;  // Time of day object
};

// Manager class for maps
class Maps {
public:
    Maps();                           // Constructor
    ~Maps();                          // Destructor
    Maps(const Maps& other);          // Copy constructor
    Maps& operator=(const Maps& other); // Copy assignment operator

    void chooseMap() const;           // Display and select a map

private:
    std::vector<MapBase*> map_list;   // List of polymorphic maps
    void handleMapChoice(int choice) const;
};

#endif // MAP_H
