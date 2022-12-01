//
// Created by Terence on 29/11/2022.
//

#ifndef C___PROJECT_AIRLINES_H
#define C___PROJECT_AIRLINES_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <list>


using namespace std;

class Airlines {

public:
    //unordered_map<string, list<Airlines>> airlinesMap;
    string airlineID, airlineName, airlineAlias, airlineIataCode, airlineIcoaCode, airlineCallsign, airlineCountry, airlineActive;

    Airlines();

    Airlines(string airlineID, string airlineName, string airlineAlias, string airlineIataCode,
             string airlineIcoaCode, string airlineCallsign, string airlineCountry, string airlineActive);

    //const unordered_map<string, list<Airlines>> &getAirlinesMap() const;

    const string &getAirlineId() const;

    const string &getAirlineName() const;

    const string &getAirlineAlias() const;

    const string &getAirlineIataCode() const;

    const string &getAirlineIcoaCode() const;

    const string &getAirlineCallsign() const;

    const string &getAirlineCountry() const;

    const string &getAirlineActive() const;

};

#endif //C___PROJECT_AIRLINES_H