#include "map.h"
#include <iostream>

int main() {
    std::cout << "Welcome to the Map Selector!\n";

    // Initialize the Maps collection
    Maps maps;

    // Display and allow the user to choose a map
    maps.chooseMap();

    std::cout << "Thank you for using the Map Selector!\n";

    return 0;
}
