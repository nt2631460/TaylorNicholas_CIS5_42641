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
    double test1,test2,test3,test4,test5; //Scores of each test
    double test_average; //Average score of all 5 tests

    //Input data
    cout<<"Enter five test cores that should be calculated in the average."<<endl;
    cout<<"Test 1: ";
    cin>>test1;
    cout<<"Test 2: ";
    cin>>test2;
    cout<<"Test 3: ";
    cin>>test3;
    cout<<"Test 4: ";
    cin>>test4;
    cout<<"Test 5: ";
    cin>>test5;    
    //Map inputs to outputs or process the data
    test_average = (test1+test2+test3+test4+test5)/5;
    //Output the transformed data
   cout<< "The average test score was: ";
   cout<< setprecision(1)<< fixed;
   cout<< test_average;
    //Exit stage right!
    return 0;
}

