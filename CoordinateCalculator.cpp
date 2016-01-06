/* 
 * File:   CoordinateCalculator.cpp
 * Author: Sergiusz Lebedyn
 * 
 * Created on January 4, 2016, 9:53 PM
 */

#include <math.h>
#include <iostream>
#include "CoordinateCalculator.h"

CoordinateCalculator::CoordinateCalculator(City *cities, int count) {
    this->cities = cities;
    this->count = count;
}

/**
 * Method for calculating distance between two city by array indexes
 * @param integer firstIndex 
 * @param integer secondIndex
 * @return float distance between two cities
 */
float CoordinateCalculator::getDistanceBetwenTwoCity(int firstIndex, int secondIndex) {

    float x = pow(this->cities[secondIndex].coordinate->x - this->cities[firstIndex].coordinate->x, 2);
    float y = pow(this->cities[secondIndex].coordinate->y - this->cities[firstIndex].coordinate->y, 2);

    if (false) {
        std::cout << "First index: " << firstIndex << "\n";
        std::cout << "Second index: " << secondIndex << "\n";
        std::cout << "X1: " << this->cities[firstIndex].coordinate->x << " X2: " << this->cities[secondIndex].coordinate->x << "\n";
        std::cout << "Y1: " << this->cities[firstIndex].coordinate->y << " Y2: " << this->cities[secondIndex].coordinate->y << "\n";
        std::cout << "pow X: " << x << "\n";
        std::cout << "pow Y: " << y << "\n";
        std::cout << "SQRT XY: " << sqrt(x + y) << "\n";
    }

    return sqrt(x + y);
}

CoordinateCalculator::searchNextCity() {

    for (int i = 0; i < this->count; i++) {
        int nearestCityIndex = this->getNearestCity(i);
        if (nearestCityIndex >= 0) {
            this->cities[i].nextCityIndex = nearestCityIndex;
        }
        this->cities[i].isVisited = 1;
    }
}

int CoordinateCalculator::getNearestCity(int cityIndex) {
    int nearestCityIndex = -1;
    int length = 999999999;


    for (int i = 0; i< this->count; i++) {
        if (i != cityIndex && this->cities[i].isVisited == 0) {
            //            if (i == 0) {
            //                int currentLength = this->getDistanceBetwenTwoCity(cityIndex, i);
            //                length = currentLength;
            //            }


            int currentLength = this->getDistanceBetwenTwoCity(cityIndex, i);
            if (currentLength < length) {
                nearestCityIndex = i;
                length = currentLength;
            }
            std::cout << "Current Length: " << currentLength << "\n";
            std::cout << "Length: " << length << "\n";

        }

    }
    return nearestCityIndex;
}

