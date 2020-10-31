#include "Apps.h"
#include "RankingApp.h"
#include <iostream>
#include <string>
using namespace std;

RankingApp::RankingApp() {
    ranking = 0;
}

RankingApp::RankingApp(Apps app) {
    this->app = app;
}
/******************************************************************************
Here we figure out some sort of sorting alogrithm to come up for the 
ranking of the app.
*******************************************************************************/

Apps RankingApp::GetApp() const{
    return app;
}