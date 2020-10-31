/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include "Apps.h"
#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char* argv[])
{
    string userName, userCategory;
    double userRating;
    int userInstalls;
    
    cout << "Please enter the name of the app" << endl;
    getline(cin, userName);
    cout <<"Enter the category this app is labeled under" << endl;
    getline(cin, userCategory);
    cout <<"Enter the app's rating" << endl;
    cin >> userRating;
    cout << "Enter number of installs" << endl;
    cin >> userInstalls;
    cout << "\n";
    
    Apps userApp = Apps(userName, userCategory, userRating, userInstalls);
    
}
