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
    double month, day, year;
    
    //Input data
    cout << "Enter a month (numerically): ";
    cin  >> month;
    cout << "Enter a day (numerically): ";
    cin  >> day;
    cout << "Enter the last two digits of a year: ";
    cin  >> year;
    month * day == year ? cout << "The date you have picked, "<<month<<"/"<<day<<"/"<<year<<", is magical. \n" : cout<< "The date you have picked, "<<month<<"/"<<day<<"/"<<year<<", is not magical. \n"; 
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

