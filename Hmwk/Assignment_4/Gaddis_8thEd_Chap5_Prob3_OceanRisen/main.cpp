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
    double anual_rise = 1.5;
    //Output the transformed data
    cout<<"   Years     |  Millimeters Risen"<<endl;
    for (int years = 0; years<25; years++ ){
        if(years>8){
            cout<<"   "<<years+1<<"        |      "<<1.5*(years+1)<<endl;
        }
        else{
            cout<<"   "<<years+1<<"         |      "<<1.5*(years+1)<<endl;
        }
    }
    //Exit stage right!
    return 0;
}

