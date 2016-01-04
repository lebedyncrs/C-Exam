/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CoordinateCalculator.cpp
 * Author: Sergiusz Lebedyn
 * 
 * Created on January 4, 2016, 9:53 PM
 */

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
    return 2.1;
}

