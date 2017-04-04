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
    double sales [5];
    int stars;
    
    //Input data
    for(int i = 0; i<5; i++){
        cout<<"Enter today's sales for store " << i+1<<": ";
        cin>> sales[i];
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout << "SALES BAR CHART"<<endl;
    cout <<"(Each * = $100)"<<endl;
    for(int i = 0; i<5; i++){
        cout<<"Store "<<i+1<<": ";
        stars = sales[i]/100;
        for(int j = 0; j<stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Exit stage right!
    return 0;
}

