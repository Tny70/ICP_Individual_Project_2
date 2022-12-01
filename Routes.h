//
// Created by Terence on 29/11/2022.
//

#ifndef C___PROJECT_ROUTES_H
#define C___PROJECT_ROUTES_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <list>

using namespace std;

class Routes {
public:
//    unordered_map<string, list<Routes>> routesMap;
//    unordered_map<string, list<Routes>> iataRoutes;
    string airlineCode, airlineID, sourceAirportCode, sourceAirportID, destinationAirportCode, destinationAirportID, codeShare, stops, equipment;

    Routes();

    Routes(string airlineCode,string airlineID,string sourceAirportCode,string sourceAirportID,
           string destinationAirportCode,string destinationAirportID,string codeShare,string stops,string equipment);

//    const unordered_map<string, list<Routes>> &getRoutesMap() const;
//
//    const unordered_map<string, list<Routes>> &getIataRoutes() const;

    string getAirlineCode();

    string getAirlineId();

    string getSourceAirportCode();

    string getSourceAirportId();

    string getDestinationAirportCode();

    string getDestinationAirportId();

    string getCodeShare();

    string getStops();

    string getEquipment();

    bool operator==(const Routes &rhs) const;

    bool operator!=(const Routes &rhs) const;


};
#endif //C___PROJECT_ROUTES_H
