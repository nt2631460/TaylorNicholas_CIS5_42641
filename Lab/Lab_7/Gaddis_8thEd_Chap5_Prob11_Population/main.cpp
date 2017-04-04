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
    double size, avg_increase, days;
    //Input data
    cout <<"What is the initial population? ";
    cin >> size;
    cout << "What is their average daily population increase as a percent? ";
    cin >> avg_increase;
    cout << "How many days will they multiply for? ";
    cin >> days;
    //Output the transformed data
    cout<<"Initial Population: "<<size<<endl;
    cout<<"Population Growth"<<endl;
    cout<<"Day      |  Population"<<endl;
    cout<<"----------------------------"<<endl;
    for(int i = 0; i<days; i++){
        
        size = size*(1+(avg_increase/100));
        cout<<" "<<i+1<<"       |     "<<size<<endl;
    }
    //Exit stage right!
    return 0;
}

