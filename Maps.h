// map.h

#ifndef MAP_H    // Include guard
#define MAP_H

#include <string>
#include <vector>
#include <iostream>

// Enum class for Weather
enum class Weather {
    SUNNY,
    RAINY,
    SNOWY
};

// Enum class for Time of Day
enum class TimeOfDay {
    DAY,
    NIGHT
};

// Map struct to store individual map details
struct Map {
    std::string name;
    Weather weather;
    TimeOfDay time_of_day;

    // Constructor
    Map(const std::string& name, Weather weather, TimeOfDay time_of_day)
        : name(name), weather(weather), time_of_day(time_of_day) {}
};

// Maps class to store and manage available maps
class Maps {
public:
    // Constructor to initialize predefined maps
    Maps();

    // Function to display map options and let player choose one
    void chooseMap() const;

private:
    std::vector<Map> map_list;  // List of predefined maps

    // Helper function to display weather as a string
    static std::string weatherToString(Weather weather);

    // Helper function to display time of day as a string
    static std::string timeOfDayToString(TimeOfDay time_of_day);
};

#endif // MAP_H


