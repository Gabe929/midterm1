#include "Apps.h"
#include "RankingApp.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


RankingApp::RankingApp(Apps app) {
    this->app = app;
}


Apps RankingApp::GetApp() const{
    return app;
}

/******************************************************************************
This function proved to be the most difficult part of the project. In order to find the ranking of 
the app I had to create and upload a list of the current top 300 apps and have the RankingApp 
class open the file, use delimiters to seperate the variables and compare them to the apps data.
It continues down the mytext.txt list until findind the one that matches in which it takes the 
rank and prints it. 
*******************************************************************************/
void RankingApp::PrintInfo() const {
    string line; 
    
    int rank;
    int temp;
    string category;
    double rating;
    long long installs;
    
    ifstream file("mytext.txt");
    if(file.is_open()){
      while(getline(file, line,' ')) {
        temp = stoi(line);
        if (getline(file, line, ' ')) {
          category = line;
        }
        if (getline(file, line, ' ')){
          rating = stod(line);
        }
        if (getline(file, line)){
          installs = stoll(line);
        }
        
        if(app.GetRating() == rating){
            if(app.GetInstalls() == installs){
                if(app.GetCategory().compare(0, category.size(), category) == 0){
                        rank = temp;
                        file.close();
                }
                
            }
        }
      }  
    }
    else{
        cout << "File is not open." << endl;
    }
    if (0 < rank && rank <= 500){
        app.PrintInfo();
        cout << "The ranking of this app in the Google Play Store is " << rank;
    }
    else {
        cout << "This app is not within the top 500." << endl;
    }
}