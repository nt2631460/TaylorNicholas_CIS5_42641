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
    float anual_charge = 2500;
    float charge_increase = 1.04;

    //Output the transformed data
    cout << "Initial price: "<< anual_charge<<endl;
    cout <<"Yearly price over the next six years:"<<endl;
    cout << "Year | Cost" <<endl;
   
    for (int year = 0; year < 6; year++){
        anual_charge = anual_charge * charge_increase; 
        cout << "  "<<year <<"  | "<< anual_charge << endl;
    }
    //Exit stage right!
    return 0;
}

