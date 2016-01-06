/* 
 * File:   DataFaker.h
 * Author: lebs
 *
 * Created on January 4, 2016, 10:22 PM
 */

#include <math.h>
#include <cstdlib>
#include "Coordinate.h"
#include "City.h"

#ifndef DATAFAKER_H
#define DATAFAKER_H

class DataFaker {
public:
    City *cities;
    generateCities(int count);
    Coordinate* generateCoordinate();
};

#endif /* DATAFAKER_H */

