#include "Apps.h"
#include <iostream>
#include <string>
using namespace std;

Apps::Apps(){   // Sets the default values for the private values in the Apps class
    name = "None";
    category = "None";
    rating = 0;
    installs = 0;
}

Apps::Apps(string name, string category, double rating, long long installs){ // Sets the values for the private values in the Apps class
    this->name = name;
    this->category = category;
    this->rating = rating;
    this-> installs = installs;
}
string Apps::GetName() const{   // Each of these are to call for the value of each variable, which is used in RankingApp.cpp
    return name;
}
        
string Apps::GetCategory() const{
    return category;
} 
        
double Apps::GetRating() const{
    return rating;
}
        
long long Apps::GetInstalls() const{
    return installs;
}

void Apps::PrintInfo() const {  //Prints the values of the app
    cout << "App Info\nApp Name: " << name << "\nCategory: " << category << "\nRating: "; 
    cout << rating << "\nNumber of Installs: " << installs << endl;
}