/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 10 2017
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //For fixed-point notation.
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float cupsSugar, cupsFlour, cupsButter; //Cups of flour, sugar, and better needed for one cookie
    float reqSugar, reqFlour, reqButter; //Required amount of sugar, flour, and butter for the desired number of cookies
    int number_of_cookies;
    
    //Initialize variables
    
    //Numbers adjusted for one cookie
    cupsSugar = (1.5/48); 
    cupsFlour = (2.75/48);
    cupsButter = (1.0/48);
        
    //Input data
    cout<<"How many cookies would you like to bake?"<<endl;
    cout<<"Number of cookies: ";
    cin>>number_of_cookies;
    
    //Map inputs to outputs or process the data
    reqSugar  = number_of_cookies*cupsSugar;
    reqFlour  = number_of_cookies*cupsFlour;
    reqButter = number_of_cookies*cupsButter;
    //Output the transformed data
     cout<< setprecision(2)<< fixed;
    cout<<"You will need "<< reqSugar<<" cups of sugar, "<<reqFlour<<" cups of flour, and "<<reqButter<<" cups of butter to make ";
    cout<<number_of_cookies<<" cookies.";
    
    //Exit stage right!
    return 0;
}

