/******************************************************************************
For this program the user enters data about the app in the Google PLay Store. 
We run that data against November 2, 2020 list of top 300 apps and see if it is on the list.
If it is in the top 300 the program prints the app's information and the ranking it holds.
*******************************************************************************/
#include "Apps.h"
#include "RankingApp.h"
#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char* argv[])
{
    string userName, userCategory;
    double userRating;
    long long userInstalls;
    
    cout << "Please enter the name of the app" << endl;
    getline(cin, userName);
    cout <<"Enter the category this app is labeled under (Please enter in lowercase)" << endl;
    getline(cin, userCategory);
    cout <<"Enter the app's rating" << endl;
    cin >> userRating;
    cout << "Enter number of installs" << endl;
    cin >> userInstalls;
    cout << "\n";
    
    // Here the program collects data on the app and sends it to the Apps Class
    
    Apps userApp = Apps(userName, userCategory, userRating, userInstalls);
    
    RankingApp newRankingApp = RankingApp(userApp);
    
    newRankingApp.PrintInfo();
    
}
