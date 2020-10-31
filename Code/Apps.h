#ifndef APPSH
#define APPSH

#include <string>
using namespace std;

class Apps {
    public:
        Apps();
        
        Apps(string name, string category, double rating, int installs);
        
        string GetName(string name) const;
        string GetCategory(string category) const; 
        double GetRating(double rating) const;
        int GetInstalls(int installs) const;
        
        void PrintInfo() const;
        
    private:
        string name;
        string category;
        double rating;
        int installs;
};
#endif