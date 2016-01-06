/* 
 * File:   DataFaker.cpp
 * Author: Sergiusz Lebedyn
 * 
 * Created on January 4, 2016, 10:22 PM
 */

#include <iostream>

#include "DataFaker.h"

/**
 * create Coordinate object and fill x,y property with random digits
 * @return Coordinate object
 */
Coordinate* DataFaker::generateCoordinate() {
    return (new Coordinate(rand() / 10000, rand() / 10000));
}

/**
 * Multiple create city objects with random coordinate 
 * @param integer count count of city objects

 */
DataFaker::generateCities(int count) {
    this->cities = new City[count];
//    int x[5];
//    int y[5];
//    x[0] = 103;
//    x[1] = 95;
//    x[2] = 90;
//    x[3] = 85;
//    x[4] = 80;
//
//    y[0] = 29;
//    y[1] = 16;
//    y[2] = 15;
//    y[3] = 10;
//    y[4] = 5;

    for (int i = 0; i < count; i++) {
        this->cities[i].coordinate = this->generateCoordinate();
        this->cities[i].index = i;
    }
}
