#ifndef RANKINGAPPH
#define RANKINGAPPH

#include "Apps.h"
#include <string>
using namespace std;

class RankingApp{
    public:
        
        RankingApp(Apps app); // Sets the prev
        
        Apps GetApp() const;
        
        void PrintInfo() const; // Reads the mytext.txt file and prints the correct ranking for the app
    private:
    Apps app;
};
#endif