#include <iostream>
// including classes
#include "City.h"
#include "Coordinate.h"
#include "CoordinateCalculator.h"
#include "DataFaker.h"


using namespace std;
//
//class Coordinate {
//public:
//    int x;
//    int y;
//
//    Coordinate(int x, int y) {
//        this->x = x;
//        this->y = y;
//    }
//};
//
//class City {
//public:
//    bool visited;
//    int index;
//    int nextCityIndex;
//    Coordinate *coordinate;
//
//    City(int count) {
//        this->visited = 0;
//    };
//
//    City() {
//    }
//};
//
//class Calculator {
//public:
//    int count;
//
//    Calculator(int count) {
//        this->count = count;
//    };
//
//    CalculateLength(City *cities) {
//        int length;
//        for (int i = 0; i< this->count; i++) {
//            if (i + 1 < this->count) {
//                int length = this->getLength(cities[i], cities[i + 1]);
//            }
//            for (int j = i; j < this->count; j++) {
//                if (j + 1 < this->count) {
//                    int currentLength = this->getLength(cities[i], cities[j + 1]);
//                    if (currentLength < length) {
//                        length = currentLength;
//
//                        cout << j << endl;
//                    }
//                }
//
//            }
//        }
//    }
//
//    int getLength(City first, City second) {
//        return first.coordinate->x - second.coordinate->x;
//    }
//
//    int roundLength(int num) {
//        return (((int) num * 100) % 100) / 100;
//    }
//};
//
//class DataFaker {
//public:
//    int count;
//    City *cities;
//
//    DataFaker(int count) {
//        this->count = count;
//        this->cities = new City[count];
//    }
//
//    City* fillData() {
//        for (int i = 0; i < this->count; i++) {
//            this->cities[i] = {this->count};
//            this->cities[i].coordinate = new Coordinate(rand() / 1000000, rand() / 1000000);
//            this->cities[i].index = i;
//        }
//        return this->cities;
//    }
//};

int main() {
    //    int count = 30;
    //
    //    DataFaker *dataFaker;
    //    City *cities;
    //    Calculator *calculator;
    //
    //    dataFaker = new DataFaker(count);
    //    cities = dataFaker->fillData();
    //    calculator = new Calculator(count);
    //
    //    calculator->CalculateLength(cities);
    //    Coordinate *coordinates = new Coordinate[3];
    //    City *cities = new City[3];
    //
    //    coordinates[0].x = 11;
    //    coordinates[0].y = 11;
    //
    //    coordinates[1].x = 22;
    //    coordinates[1].y = 22;
    //
    //    coordinates[2].x = 33;
    //    coordinates[2].y = 33;
    //
    //    cities[0].coordinate = &coordinates[0];
    //    cities[1].coordinate = &coordinates[1];
    //    cities[2].coordinate = &coordinates[2];
    //
    //    CoordinateCalculator *calc = new CoordinateCalculator(cities, 3);
    int cityCount = 10;
    DataFaker *faker = new DataFaker;
    faker->generateCities(cityCount);

    CoordinateCalculator *calculator = new CoordinateCalculator(faker->cities, cityCount);
    calculator->searchNextCity();
//
    for (int i = 0; i < cityCount; i++) {
        cout << faker->cities[i].nextCityIndex << endl;
    }
}

