//
// Created by Terence on 29/11/2022.
//

#include <unordered_set>
#include "BFS.h"
#include <algorithm>

BFS::BFS() {
};

BFS::BFS(string startingCity, string startingCountry, string endCity, string endCountry) {
    this->startingCity = startingCity;
    this->startingCountry = startingCountry;
    this->endCity = endCity;
    this->endCountry = endCountry;

}


list<Node> BFS::nodeCreator() {
    data.fileReading();
    list<Airports> startAirport = data.airportsMap.at(startingCity+startingCountry);
    list<Node> airportNodes;

    for (Airports airport:startAirport){
        Routes dummy;
        Node dummyOne;
        Node node = Node(&dummyOne,airport, dummy,0);
        airportNodes.push_back(node);
    }
    return airportNodes;

}



bool BFS::goalTest(Node child){
    if (child.getState().getAirportCity() == endCity && child.getState().getAirportCountry() == endCountry){
        return true;
}
    else{
        return false;

    }
}




Node BFS::breadthFirstSearch() {
    data.fileReading();
    list<Node> frontier;
    unordered_set<string> explored;
    list<Node> airportNode = nodeCreator();

    for (Node location: airportNode) {
        frontier.push_back(location);
    }




    while (frontier.size() > 0) {
        Node initialNode = frontier.front();
        Node tempNode = initialNode;
        frontier.pop_front();
        explored.insert(tempNode.getState().getAirportIataCode());



        if (initialNode.getState().getAirportIataCode() != "") {
                list<Routes> flights = data.routesMap.at(initialNode.getState().getAirportIataCode());

                for (Routes action: flights) {
                    Node child = Node(&initialNode, data.iataAirport.at(action.getDestinationAirportCode()),
                                      action, initialNode.getPathCost() + 1);


                    bool found = find(frontier.begin(), frontier.end(), child) != frontier.end();
                    if (explored.count(child.getState().getAirportIataCode()) == 0 && found == false) {
                        cout << child.getState().getAirportIataCode() << endl;
                        if (goalTest(child) == true) {
                            cout << "Path found" << endl;
                            cout << child.stringConvertor() << endl;
                            return child;


                        }
                        frontier.push_back(child);
                    }


                }

            } else{;}
        }
    Node dummy;
    return dummy;
    }

void BFS::fileInput() {
    ifstream inputTXT("accra-london.txt");
    string   line;
    vector<string> locations;

    int i = 0;

    if (inputTXT.is_open()){
        while (getline(inputTXT, line))
        {

            istringstream ss(line);
            string token;
            getline(ss,token,',');
            locations.push_back(token);
            i++;

            while (getline(ss, token,',')){
                ss.ignore();
                locations.push_back(token);
                i++;
            }

        }
    }

    startingCity = locations[0];
    startingCountry = locations[1];
    endCity = locations[2];
    endCountry = locations[3];
}






