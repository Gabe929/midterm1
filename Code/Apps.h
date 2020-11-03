#ifndef APPSH
#define APPSH

#include <string>
using namespace std;

//

class Apps {
    public:
        Apps();
        
        Apps(string name, string category, double rating, float installs); // Sets the values for the private values in the Apps class
        
        string GetName() const;     // Each of these are to call for the value of each variable, which is used in RankingApp.cpp
        string GetCategory() const; 
        double GetRating() const;
        float GetInstalls() const;
        
        void PrintInfo() const; //Prints the values of the app
        
    private:    // All of the values that were collecte for the app
        string name;
        string category;
        double rating;
        float installs;
};
#endif