//
// Created by Terence on 29/11/2022.
//

#ifndef C___PROJECT_NODE_H
#define C___PROJECT_NODE_H

#include <string>
#include <iostream>
#include <set>
#include "Airlines.h"
#include "Airports.h"
#include "Routes.h"


using namespace std;


class Node {
public:
    Node* parent;

    Airports state;

    Routes actions;

    int pathCost;

    Node();


    Node(Node* parent, Airports state, Routes actions, int pathCost);

    string stringConvertor();

    Node *getParent();

    Airports getState();

    Routes getActions();

    int getPathCost();

    bool operator==(const Node &rhs) const;

    void solutionPath(Node kid);

};


#endif //C___PROJECT_NODE_H
