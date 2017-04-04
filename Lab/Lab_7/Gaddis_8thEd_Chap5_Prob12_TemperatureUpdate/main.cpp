/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 20, 2017
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

    for (int C = 0; C<21; C++){
        cout<< setprecision(1)<< fixed;
        cout<<"When Celsius is "<< C <<" Fahrenheit is: "<<((9.0/5)*C) + 32<<endl;
    }
    
    //Exit stage right!
    return 0;
}

