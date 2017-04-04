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
    char ASCII = 0;
    int counter = 0;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    while(counter<128){
        
        if(counter % 16 == 0)
            cout << endl;
            cout << ASCII << ' ';
            ASCII++;
            
        counter ++;
    }
    //Exit stage right!
    return 0;
}

