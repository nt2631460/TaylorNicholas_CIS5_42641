/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 20 2017
 *
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
    double nGallons, nMiles; //Gallons the car can hold and number of miles on a full tank. 
    double MPG; //Calculated miles per gallon
    
    //Input data
    cout<<"This program will calculate a cars gas mileage. "<<endl;
    cout<<"Input the number of gallons of gas the car can hold: "; 
    cin >> nGallons;
    cout<<"Input the number of miles the car can be driven on a full tank: ";
    cin >> nMiles; 
    
    //Map inputs to outputs or process the data
   MPG = nMiles/nGallons;
    
    //Output the transformed data
   cout<<"A car that can drive "<<nMiles<<" with "<<nGallons<<" gallons of gas can drive "<<MPG<<" miles per gallon of gas."; 
    //Exit stage right!
    return 0;
}

