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
    int index;
    int nextCityIndex;
    Coordinate *coordinate;
    int isVisited;

};

#endif /* CITY_H */

