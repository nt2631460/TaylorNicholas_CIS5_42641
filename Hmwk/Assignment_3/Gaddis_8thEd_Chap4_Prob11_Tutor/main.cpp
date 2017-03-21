/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 20, 2017
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
    int answer;
    //Initialize variables
    srand(std::time(0));
    num1 = std::rand() % 999 + 1;
    num2 = std::rand() % 999 + 1;
    
    //Output the transformed data
    cout << "Problem: " << endl;
    cout << "     " << setw(3) << num1 << endl;
    cout << "    +" << setw(3) << num2 << endl; 
    cout << "    ----" << endl;
    cout << "Enter answer here :";
    cin >> answer;
    cout << "     " << setw(3) << num1 << endl;
    cout << "    +" << setw(3) << num2 << endl; 
    cout << "    ----" << endl;
    cout << "    "<< setw(4) << num1+num2 << endl;
    
    answer == num1+num2 ? cout<<"You got the answer correct! \n" : cout<<"That is the incorrect answer. Try revising your work. \n";
    //Exit stage right!
    return 0;
}

