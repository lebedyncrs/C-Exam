/* 
 * File:   City.h
 * Author: Sergiusz Lebedyn
 *
 * Created on January 4, 2016, 9:47 PM
 */
#include "Coordinate.h"

#ifndef CITY_H
#define CITY_H

class City {
public:
    // current index the object in array
    int index;
    int nextCityIndex;
    Coordinate *coordinate;
    // flag shows whether city is visited
    bool isVisited = 0;

};

#endif /* CITY_H */

