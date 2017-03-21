/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 20, 2017
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double seconds, minutes, hours, days;
    //Input data
    cout<<"Enter the number of seconds to be calculated: ";
    cin >> seconds;
    //Map inputs to outputs or process the data
    if (0<=seconds && seconds<60){
        cout<<"There are " << seconds << " seconds in that time."<<endl;
    }
    if(60<=seconds && seconds<3600){
        minutes = seconds/60;
        cout<<"There are " << minutes << " minutes in that time."<<endl;
        
    }
    if(3600<=seconds && seconds<86400){
        hours = seconds/3600;
        cout<<"There are " << hours << " hours in that time."<<endl;
    }
    if(86400<=seconds){
        days = seconds/86400;
        cout<<"There are " << days << " days in that time."<<endl;
    }

    //Exit stage right!
    return 0;
}

