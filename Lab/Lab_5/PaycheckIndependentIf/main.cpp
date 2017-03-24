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
    double payRate, hrsWrkd;
    double payChck = 0;
    //Input data
    cout<<"The program produces a paycheck from number of hours worked"<<endl;
    cout<<"The hourly pay and number of hours may be entered as decimals, but the unit of time worked must be hours."<<endl;
    cout<<"Type in the pay rate: ";
    cin >> payRate;
    cout<<"Enter hours worked: ";
    cin >> hrsWrkd;  
    if (payRate<0 || hrsWrkd < 0){
        cout<<"Negative numbers for either value are not accepted."<<endl;
        return 1;
    }
    //Map inputs to outputs or process the data
    if (hrsWrkd<=40){
        payChck = payRate*hrsWrkd;
    }
    if (hrsWrkd>40){
        payChck += payRate*40;
        payChck += (payRate * ((hrsWrkd - 40)))*2;
    }
    //Output the transformed data
    cout<<"With a pay rate = $"<<payRate<<"/hr and hours worked = "<<hrsWrkd<<" you would make a paycheck = $"<<payChck;
    //Exit stage right!
    return 0;
}

