//
// Created by Terence on 30/11/2022.
//

#include "DataExtraction.h"

DataExtraction::DataExtraction() {

}

void DataExtraction::fileReading() {

    //Airports
    string portID, portName, portCity, portCountry, portIata, portIcao;
    string newLine;
    string entry;
    vector<string> airport;

    fstream fin;
    fin.open("airports.csv", ios::in);
    getline(fin, newLine);


    while (getline(fin, newLine)) {
        airport.clear();
        stringstream s(newLine);

        while (getline(s, entry, ',')) {
            airport.push_back(entry);

            if (airport.size() == 14) {
                portID = airport[0];
                portName = airport[1];
                portCity = airport[2];
                portCountry = airport[3];
                portIata = airport[4];
                portIcao = airport[5];

                string key = portCity + portCountry;

                Airports newAirports = Airports(portID, portName, portCity, portCountry,
                                                portIata, portIcao);


                if (airportsMap.count(key) == 0) {
                    airportsMap[key].push_back(newAirports);
                } else {
                    airportsMap.at(key).push_back(newAirports);
                }

                if(iataAirport.count(key)==0){
                    iataAirport[portIata] = newAirports;
                } else{
                    iataAirport[portIata] = newAirports;

                }
            }

        }


    }

    //Airlines
    string airID, airName, airAlias, airIata, airIcoa, airCallsign, airCountry, airActive;
    string newLineOne;
    string entryOne;
    vector<string> airline;

    fstream finOne;
    finOne.open("airlines.csv", ios::in);
    getline(finOne, newLineOne);

    while (getline(finOne, newLineOne)) {
        airline.clear();
        stringstream s(newLineOne);


        while (getline(s, entryOne, ',')) {
            airline.push_back(entryOne);

            if (airline.size() == 8) {
                airID = airline[0];
                airName = airline[1];
                airAlias = airline[2];
                airIata = airline[3];
                airIcoa = airline[4];
                airCallsign = airline[5];
                airCountry = airline[6];
                airActive = airline[7];



                Airlines newAirlines = Airlines(airID, airName, airAlias, airIata,
                                                airIcoa, airCallsign, airCountry,
                                                airActive);


                if (airportsMap.count(airIata) == 0) {
                    airlinesMap[airIata].push_back(newAirlines);
                } else {
                    airlinesMap.at(airIata).push_back(newAirlines);
                }

            }

        }


    }


    //Routes
    string RairCode, RairID, sourceAirCode, sourceAirID, destAirCode, destAirID, codeSh, stop, equip;
    string newLineTwo;
    string entryTwo;
    vector<string> route;

    fstream finTwo;
    finTwo.open("routes.csv", ios::in);
    getline(finTwo, newLineTwo);

    while (getline(finTwo, newLineTwo)) {
        route.clear();
        stringstream s(newLineTwo);


        while (getline(s, entryTwo, ',')) {
            route.push_back(entryTwo);



            if (route.size() == 9) {
                RairCode = route[0];
                RairID = route[1];
                sourceAirCode = route[2];
                sourceAirID = route[3];
                destAirCode = route[4];
                destAirID = route[5];
                codeSh = route[6];
                stop = route[7];
                equip = route[8];



                Routes newRoutes = Routes(RairCode, RairID, sourceAirCode,
                                          sourceAirID, destAirCode, destAirID,
                                          codeSh, stop, equip);


                if (routesMap.count(sourceAirCode) == 0) {
                    routesMap[sourceAirCode].push_back(newRoutes);
                } else {
                    routesMap.at(sourceAirCode).push_back(newRoutes);
                }
                if(iataRoutes.count(sourceAirCode)== 0){
                    iataRoutes[sourceAirCode].push_back(newRoutes);
                } else{
                    iataRoutes.at(sourceAirCode).push_back(newRoutes);
                }



            }
        }

    }
}