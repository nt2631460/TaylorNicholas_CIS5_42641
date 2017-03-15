/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 10
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
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
    int males, females; // How many males and females are in the class
    float class_size; // Total number of students
    float percent_male, percent_female; //Calculated percentage of each gender
    
    //Input data
    cout<< "Enter how many males are in the class: ";
    cin >> males; 
    cout<< "Enter how many females are in the class: ";
    cin >> females; 
    
    //Map inputs to outputs or process the data
    class_size = males+females;
    percent_male = males/class_size;
    percent_female = females/class_size;
    
    //Output the transformed data
    
    cout<<percent_male*100<<" percent of the class is male and "<<percent_female*100<<" percent of the class is female."<<endl;
    
    //Exit stage right!
    return 0;
}

