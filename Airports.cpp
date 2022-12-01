//
// Created by Terence on 29/11/2022.
//

#include "Airports.h"


Airports::Airports(){}

Airports::Airports(string airportID, string airportName, string airportCity, string airportCountry,
                   string airportIataCode, string airportIcaoCode) {
    this->airportID = airportID;
    this->airportName = airportName;
    this->airportCity = airportCity;
    this->airportCountry = airportCountry;
    this->airportIataCode = airportIataCode;
    this->airportIcaoCode = airportIcaoCode;


}

//const unordered_map<string, list<Airports>> &Airports::getAirportsMap() const {
//    return airportsMap;
//}
//
//unordered_map<string, Airports> *Airports::getIataAirport() const {
//    return iataAirport;
//}

string Airports::getAirportId(){
    return airportID;
}

string Airports::getAirportName(){
    return airportName;
}

string Airports::getAirportCity(){
    return airportCity;
}

string Airports::getAirportCountry(){
    return airportCountry;
}

string Airports::getAirportIataCode(){
    return airportIataCode;
}

string Airports::getAirportIcaoCode(){
    return airportIcaoCode;
}

bool Airports::operator==(const Airports &rhs) const {
    return
//    airportsMap == rhs.airportsMap &&
//           iataAirport == rhs.iataAirport &&
           airportID == rhs.airportID &&
           airportName == rhs.airportName &&
           airportCity == rhs.airportCity &&
           airportCountry == rhs.airportCountry &&
           airportIataCode == rhs.airportIataCode &&
           airportIcaoCode == rhs.airportIcaoCode;
}

bool Airports::operator!=(const Airports &rhs) const {
    return !(rhs == *this);
}



