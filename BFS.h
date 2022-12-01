//
// Created by Terence on 29/11/2022.
//

#ifndef C___PROJECT_BFS_H
#define C___PROJECT_BFS_H

#include "Node.h"
#include "DataExtraction.h"
#include  <queue>
#include <algorithm>
#include <fstream>
#include <cstring>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

class BFS {

public:
    BFS();
    BFS(string startingCity, string startingCountry, string endCity, string endCountry);


    string startingCity;
    string startingCountry;
    string endCity;
    string endCountry;

    DataExtraction data;

    void fileInput();




    list<Node> nodeCreator();

    bool goalTest(Node child);

    Node breadthFirstSearch();


};

#endif //C___PROJECT_BFS_H
