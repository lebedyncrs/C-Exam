/* 
 * File:   CoordinateCalculator.h
 * Author: Sergiusz Lebedyn
 *
 * Created on January 4, 2016, 9:53 PM
 */
#include "City.h"

#ifndef COORDINATECALCULATOR_H
#define COORDINATECALCULATOR_H

class CoordinateCalculator {
public:
    // array of cities
    City *cities;
    // count of cities
    int count;
    // constructor
    CoordinateCalculator(City *cities, int count);
    /**
     * Method for calculating distance between two city by array indexes
     * @param integer firstIndex 
     * @param integer secondIndex
     * @return float distance between two cities
     */
    float getDistanceBetwenTwoCity(int firstIndex, int secondIndex);
};

#endif /* COORDINATECALCULATOR_H */

