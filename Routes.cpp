//
// Created by Terence on 29/11/2022.
//

#include "Routes.h"


string Routes::getAirlineCode(){
    return airlineCode;
}

string Routes::getAirlineId(){
    return airlineID;
}

string Routes::getSourceAirportCode(){
    return sourceAirportCode;
}

string Routes::getSourceAirportId(){
    return sourceAirportID;
}

string Routes::getDestinationAirportCode(){
    return destinationAirportCode;
}

string Routes::getDestinationAirportId(){
    return destinationAirportID;
}

string Routes::getCodeShare(){
    return codeShare;
}

string Routes::getStops(){
    return stops;
}

string Routes::getEquipment(){
    return equipment;
}

Routes::Routes() = default;

Routes::Routes(string airlineCode, string airlineID, string sourceAirportCode, string sourceAirportID,
               string destinationAirportCode, string destinationAirportID, string codeShare, string stops,
               string equipment) {
    this->airlineCode = airlineCode;
    this->airlineID = airlineID;
    this->sourceAirportCode = sourceAirportCode;
    this->sourceAirportID = sourceAirportID;
    this->destinationAirportCode = destinationAirportCode;
    this->destinationAirportID = destinationAirportID;
    this->codeShare = codeShare;
    this->stops = stops;
    this->equipment = equipment;

}

bool Routes::operator==(const Routes &rhs) const {
    return
           airlineCode == rhs.airlineCode &&
           airlineID == rhs.airlineID &&
           sourceAirportCode == rhs.sourceAirportCode &&
           sourceAirportID == rhs.sourceAirportID &&
           destinationAirportCode == rhs.destinationAirportCode &&
           destinationAirportID == rhs.destinationAirportID &&
           codeShare == rhs.codeShare &&
           stops == rhs.stops &&
           equipment == rhs.equipment;
}

bool Routes::operator!=(const Routes &rhs) const {
    return !(rhs == *this);
}


