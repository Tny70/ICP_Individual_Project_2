# ICP_Individual_Project_2

In order to use:
Add the text file to the cmake-build-debug folder
Make sure it is in the format:
start city,start country
end city,end country

for example:
Accra,Ghana
London,United Kingdom

If you are using a differnet file, change the name of file in the BFS.cpp file fileInput method:
ifstream inputTXT("accra-london.txt");


Problems:
Works only for direct flights.
Does not output to a file.
