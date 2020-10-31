#include "Apps.h"
#include <iostream>
#include <string>
using namespace std;

Apps::Apps(){
    name = "None";
    category = "None";
    rating = 0;
    installs = 0;
}

Apps::Apps(string name, string category, double rating, int installs){
    this->name = name;
    this->category = category;
    this->rating = rating;
    this-> installs = installs;
}
string Apps::GetName(string name) const{
    return name;
}
        
string Apps::GetCategory(string category) const{
    return category;
} 
        
double Apps::GetRating(double rating) const{
    return rating;
}
        
int Apps::GetInstalls(int installs) const{
    return installs;
}

void Apps::PrintInfo() const {
    cout << "App Info\nApp Name: " << name << "\nCategory: " << category << "\nRating: "; 
    cout << rating << "\nNumber of Installs: " << installs;
}