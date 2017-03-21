/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 20, 2017
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
    int num1,num2; //Numbers selected by the user. 
    
    //Input data
    cout<<"Enter two numbers below to determine which is smaller and which is larger."<<endl;
    cout<<"First number: ";
    cin >> num1;
    cout<<"Second number: ";
    cin >> num2;

    //Output the transformed data
    num1 < num2 ? cout<<num1<<" is smaller than "<<num2 <<endl : cout<<num1<<" is larger than"<<num2<<endl;     
    //Exit stage right!
    return 0;
}

