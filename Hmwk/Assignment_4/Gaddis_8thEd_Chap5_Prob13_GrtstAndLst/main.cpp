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
    int greatest, least, num, counter;
    //Initialize variables
    counter = 0;
    //Output the transformed data
    while(num!=-99){
        cout<<"Please enter an integer to compare: ";
        cin >> num;
        counter ++;
        if (counter==1){
            greatest = num;
            least = num;
        }
        if(num!=-99){
            if(num>greatest){
                greatest = num;
            }
            if(num<least){
                least = num;
            }     
        }        
    }
    if (counter<1){
        cout<<"No numbers entered to compare."<<endl;
    }
    else{
        cout<<endl;
        cout<<"Greatest: "<<greatest<<endl;
        cout<<"Least: "<< least<<endl;
    }
    //Exit stage right!
    return 0;
}

