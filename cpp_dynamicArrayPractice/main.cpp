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
    
    delete [] numArray;
    numArray = nullptr;
    
    return 0;
}

void inputData(std::size_t num, std::string arr[]) {
    
    for (int i = 0; i < num; i++){
        
         std::cout << "Enter Name #" << i+1 << ": ";
         std::string newName {};
         std::getline(std::cin >> std::ws, newName);
         arr[i] = newName;
        
     }
}

void sortData(std::size_t num, std::string arr[]){
    
    std::sort(arr, arr + num);
    std::cout << "\nOkay, done sorting! Here is your list:\n";
    
    for (int j = 0; j < num; j++){
        std::cout << "Name #" << j+1 << ": " << arr[j] << '\n';
    }
    
}
