//
//  main.cpp
//  cpp_dynamicArrayPractice
//
//  Created by Stuart Weiss on 4/30/21.
//


#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>


void inputData(std::size_t, std::string []);
void sortData(std::size_t, std::string []);

int main() {
    
    std::cout << "How many names would you like to enter? ";
    std::size_t numNames = {};
    std::cin >> numNames;
    std::string *numArray {new std::string[static_cast<int>(numNames)]};
    
    inputData(numNames, numArray);
    sortData(numNames, numArray);
    
    return 0;
}

void inputData(std::size_t numNames, std::string numArray[]) {
    
    for (int i = 0; i < numNames; i++){
        
         std::cout << "Enter Name #" << i+1 << ": ";
         std::string newName {};
         std::getline(std::cin >> std::ws, newName);
         numArray[i] = newName;
        
     }
}

void sortData(std::size_t numNames, std::string numArray[]){
    
    std::sort(numArray, numArray + numNames);
    std::cout << "\nOkay, done sorting! Here is your list:\n";
    
    for (int j = 0; j < numNames; j++){
        std::cout << "Name #" << j << ": " << numArray[j] << '\n';
    }
    
}
