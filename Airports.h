//
// Created by Terence on 29/11/2022.
//

#ifndef C___PROJECT_AIRPORTS_H
#define C___PROJECT_AIRPORTS_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <list>


using namespace std;

class Airports {
public:
    //unordered_map<string, list<Airports>> airportsMap;
    //unordered_map<string, Airports> *iataAirport;
    string airportID, airportName, airportCity, airportCountry, airportIataCode, airportIcaoCode;

    Airports();

    Airports(string airportID, string airportName, string airportCity, string airportCountry,
             string airportIataCode, string airportIcaoCode);

//    const unordered_map<string, list<Airports>> &getAirportsMap() const;
//
//    unordered_map<string, Airports> *getIataAirport() const;

    string getAirportId();

    string getAirportName();

    string getAirportCity();

    string getAirportCountry();

    string getAirportIataCode();

    string getAirportIcaoCode();

    bool operator==(const Airports &rhs) const;

    bool operator!=(const Airports &rhs) const;

};

#endif //C___PROJECT_AIRPORTS_H
