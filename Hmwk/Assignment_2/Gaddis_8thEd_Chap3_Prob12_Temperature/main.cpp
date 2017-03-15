/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 10, 2017
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
    double F, C; // Fahrenheit and Celsius 
    
    //Input data
    cout<<"Input Celsius: ";
    cin>>C;
    //Map inputs to outputs or process the data
    F = ((9.0/5)*C) + 32;      
    //Output the transformed data
    cout<< setprecision(1)<< fixed;
    cout<<"Fahrenheit is: "<<F<<endl;
    //Exit stage right!
    return 0;
}

