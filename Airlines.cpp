//
// Created by Terence on 29/11/2022.
//

#include "Airlines.h"


//const unordered_map<string, list<Airlines>> &Airlines::getAirlinesMap() const {
//    return airlinesMap;
//}

const string &Airlines::getAirlineId() const {
    return airlineID;
}

const string &Airlines::getAirlineName() const {
    return airlineName;
}

const string &Airlines::getAirlineAlias() const {
    return airlineAlias;
}

const string &Airlines::getAirlineIataCode() const {
    return airlineIataCode;
}

const string &Airlines::getAirlineIcoaCode() const {
    return airlineIcoaCode;
}

const string &Airlines::getAirlineCallsign() const {
    return airlineCallsign;
}

const string &Airlines::getAirlineCountry() const {
    return airlineCountry;
}

const string &Airlines::getAirlineActive() const {
    return airlineActive;
}

Airlines::Airlines(){}

Airlines::Airlines(string airlineID, string airlineName, string airlineAlias, string airlineIataCode,
                   string airlineIcoaCode, string airlineCallsign, string airlineCountry, string airlineActive) {
    this->airlineID = airlineID;
    this->airlineName = airlineName;
    this->airlineAlias = airlineAlias;
    this->airlineIataCode = airlineIataCode;
    this->airlineIcoaCode = airlineIcoaCode;
    this->airlineCallsign = airlineCallsign;
    this->airlineCountry = airlineCountry;
    this->airlineActive = airlineActive;


}

