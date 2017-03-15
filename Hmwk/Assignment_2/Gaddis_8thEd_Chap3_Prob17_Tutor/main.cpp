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
#include <iomanip>   //To align the numbers
#include <cstdlib>   //For random function
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int num1;
    int num2;
    //Initialize variables
    srand(std::time(0));
    num1 = std::rand() % 999 + 1;
    num2 = std::rand() % 999 + 1;
    
    //Output the transformed data
    cout << "Problem: " << endl;
    cout << "     " << setw(3) << num1 << endl;
    cout << "    +" << setw(3) << num2 << endl; 
    cout << "    ----" << endl;
    cout << "Press enter when ready to see the answer."<<endl;
    cin; 
    cout << "     " << setw(3) << num1 << endl;
    cout << "    +" << setw(3) << num2 << endl; 
    cout << "    ----" << endl;
    cout << "    "<< setw(4) << num1+num2 << endl;
    //Exit stage right!
    return 0;
}

