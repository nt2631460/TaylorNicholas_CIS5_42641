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
    double speed, time;
    
    //Input data
    cout<< "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout<< "How many hours has it traveled? ";
    cin >> time;
    
    //Output the transformed data
    cout << "Hour     Distance Traveled"<<endl;
    cout << "-----------------------------------"<<endl;
    for (int i = 1; i<time; i++){
        cout << i << "                   "<<speed*i<<endl;
    }
    cout << time << "                   "<<speed*time<<endl;
    //Exit stage right!
    return 0;
}

