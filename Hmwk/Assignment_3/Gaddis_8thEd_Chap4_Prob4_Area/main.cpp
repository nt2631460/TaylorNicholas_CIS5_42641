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
    double width1, length1, width2, length2;
    double area1, area2;
    //Input data
    cout << "Enter the length of the first rectangle: ";
    cin  >> length1;
    cout << "Enter the width of the first rectangle: ";   
    cin  >> width1;
    cout << "Enter the length of the second rectangle: ";
    cin  >> length2; 
    cout << "Enter the width of the second rectangle: ";
    cin  >> width2;
    //Map inputs to outputs or process the data
    area1 = width1 * length1;
    area2 = width2 * length2;
    //Output the transformed data
    if (area1>area2){
        cout<<"The first rectangle has a larger area than the second rectangle."<<endl;
    }
    else if(area1<area2){
        cout<<"The first rectangle has a smaller area than the second rectangle."<<endl;
    }
    else{
        cout<<"The two rectangles have the same area."<<endl;
    }
    //Exit stage right!
    return 0;
}

