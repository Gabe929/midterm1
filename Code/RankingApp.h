#ifndef RANKINGAPPH
#define RANKINGAPPH

#include "Apps.h"
#include <string>
using namespace std;

class RankingApp{
    public:
        RankingApp();
        
        RankingApp(Apps app);
        /******************************************************************************
        Here we figure out some sort of sorting alogrithm to come up for the 
        ranking of the app.
        *******************************************************************************/
        Apps GetApp() const;
    private:
    int ranking;
    Apps app;
};
#endif