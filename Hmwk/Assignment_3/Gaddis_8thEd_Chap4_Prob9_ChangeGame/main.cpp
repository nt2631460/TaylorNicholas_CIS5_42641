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
    int pennies, nickels, dimes, quarters;
    int total; 
    //Input data
    cout<<"Enter the number of pennies: ";
    cin>>pennies;
    cout<<"Enter the number of nickels: ";
    cin>>nickels;
    cout<<"Enter the number of dimes: ";
    cin>>dimes;
    cout<<"Enter the number of quarters: ";
    cin>>quarters;
    //Map inputs to outputs or process the data
    total += (pennies*1);
    total += (nickels*5);
    total += (dimes*10);
    total += (quarters*25);
    //Output the transformed data
    if (total==100){
        cout<<"Congratulations you made exactly one dollar with that change!"<<endl;
    }
    else{
       total<100 ? cout<<"Your total change was under one dollar. \n" : cout<<"Your total change was over one dollar."; 
    }
    //Exit stage right!
    return 0;
}

