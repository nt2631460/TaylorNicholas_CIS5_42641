/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 22, 2017
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
    double payRate;
    int hrsWrkd;
    double payChck = 0;
    //Input data
    cout<<"The program produces a paycheck from number of hours worked"<<endl;
    cout<<"The hourly pay may be entered as decimal, but the unit of time worked must be hours rounded to the closest integer."<<endl;
    cout<<"Type in the pay rate: ";
    cin >> payRate;
    cout<<"Enter hours worked as an integer, round if needed: ";
    cin >> hrsWrkd;  
    if (payRate<0 || hrsWrkd < 0){
        cout<<"Negative numbers for either value are not accepted."<<endl;
        return 1;
    }
    //Map inputs to outputs or process the data
    
    switch(hrsWrkd){
        case 40: case 39: case 38: case 37: case 36:
        case 35: case 34: case 33: case 32: case 31:
        case 30: case 29: case 28: case 27: case 26:
        case 25: case 24: case 23: case 22: case 21:
        case 20: case 19: case 18: case 17: case 16:
        case 15: case 14: case 13: case 12: case 11:
        case 10: case 9: case 8: case 7: case 6: 
        case 5:  case 4: case 3: case 2: case 1: case 0:
                  payChck += payRate*hrsWrkd; break; 
        default: (payChck += payRate*40, payChck += (payRate * (hrsWrkd - 40))*2);
    }
       
    //Output the transformed data
    cout<<"With a pay rate = $"<<payRate<<"/hr and hours worked = "<<hrsWrkd<<" you would make a paycheck = $"<<payChck;
    //Exit stage right!
    return 0;
}

