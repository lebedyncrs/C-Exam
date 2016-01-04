/* 
 * File:   DataFaker.cpp
 * Author: lebs
 * 
 * Created on January 4, 2016, 10:22 PM
 */

#include <iostream>
#include "DataFaker.h"

Coordinate* DataFaker::generateCoordinate() {
    return (new Coordinate(rand() / 10000, rand() / 10000));
}

DataFaker::generateCities(int count) {
    std::cout << this->generateCoordinate() << "\nyyyy";
}
