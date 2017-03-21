/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 20, 2017
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double weight, height; 
    double BMI;
    //Input data
    cout << "Enter your weight (lbs): ";
    cin >> weight; 
    cout << "Enter your height (inches): ";
    cin >> height;
    //Map inputs to outputs or process the data
    
    height = std::pow(2.0,height);
    BMI = weight * 703 / height; 
    //Output the transformed data
    if (BMI<18.5){
        cout << "You are underweight." << endl;
    }
    else if (25<BMI){
        cout << "You are overweight."<<endl;
    }
    else{
        cout << "You are at an optimal weight."<<endl;
    }
    //Exit stage right!
    return 0;
}

