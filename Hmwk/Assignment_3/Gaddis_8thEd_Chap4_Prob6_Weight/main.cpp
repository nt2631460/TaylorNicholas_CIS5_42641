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
    double mass, weight; 
    //Input data
    cout << "Enter the object's mass: ";
    cin  >> mass;
    //Map inputs to outputs or process the data
    weight = mass*9.8; 
    //Output the transformed data
    if(10 < weight && weight < 1000){
        cout << "The object weighs "<< weight<<" newtons";
    }
    else{
        weight<10 ? cout<<"The object is too light. \n" : cout<<"The object is too heavy.";
    }
    //Exit stage right!
    return 0;
}

