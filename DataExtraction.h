//
// Created by Terence on 30/11/2022.
//

#ifndef C___PROJECT_DATAEXTRACTION_H
#define C___PROJECT_DATAEXTRACTION_H
#include "Airports.h"
#include "Airlines.h"
#include "Routes.h"

class DataExtraction {
public:

    //Airport Data Structures
    unordered_map<string, list<Airports>> airportsMap;
    unordered_map<string, Airports> iataAirport;


    //Airlines Data Structures
    unordered_map<string, list<Airlines>> airlinesMap;

    //Routes Data Structures
    unordered_map<string, list<Routes>> routesMap;
    unordered_map<string, list<Routes>> iataRoutes;


    DataExtraction();

    void fileReading();




};


#endif //C___PROJECT_DATAEXTRACTION_H
