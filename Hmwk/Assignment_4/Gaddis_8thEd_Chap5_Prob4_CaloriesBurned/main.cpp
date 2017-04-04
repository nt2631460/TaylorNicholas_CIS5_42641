/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 20, 2017
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string> 
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double cpm = 3.6; //Calories per minute. 
         
    //Output the transformed data
    cout << "Minutes Ran | Calories Burned" << endl;
    cout << " "; 
    for (int time = 5; time<31; time+=5){
        cout<<std::string(6, ' ')<<time<<std::string(4,' ') <<"|   "<<time*cpm<<endl;
    }
    //Exit stage right!
    return 0;
}

