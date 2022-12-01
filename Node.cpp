//
// Created by Terence on 29/11/2022.
//

#include "Node.h"



Node *Node::getParent(){
    return parent;
}

Airports Node::getState(){
    return state;
}

Routes Node::getActions(){
    return actions;
}

int Node::getPathCost(){
    return pathCost;
}

Node::Node() {
    parent = nullptr;

}

Node::Node(Node *parent, Airports state, Routes actions, int pathCost) {
    this->parent = parent;
    this->state = state;
    this->actions = actions;
    this->pathCost = pathCost;

}

string Node::stringConvertor() {
    string stringOutput;
    stringOutput = "State: " + state.getAirportIataCode() + " parent: " + parent->getState().getAirportIataCode() +
            " actions: " + actions.getSourceAirportCode();
    return stringOutput;
}

bool Node::operator==(const Node &rhs) const {
    return parent == rhs.parent &&
           state == rhs.state &&
           actions == rhs.actions &&
           pathCost == rhs.pathCost;
}

//void Node::solutionPath(Node kid) {
//    list<string> cStates;
//    string flightOrder;
//    int pCost = 0;
//
//    list<string> fileOut;
//    while (kid.parent != nullptr) {
//        flightOrder =
//                kid.actions.getAirlineCode() + " from " + kid.getParent()->getState().getAirportIataCode() + " to " +
//                kid.state.getAirportIataCode() + " is " + kid.actions.getStops() + " stops ";
//        cStates.push_back(flightOrder);
//        pCost += 1;
//    }
//    cout << flightOrder << endl;
//
//}

