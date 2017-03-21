/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on March 20, 2017
 *
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
    int num; //Number that will be converted to a Roman Numeral.     
    //Input data
    cout<<"Enter a number to convert to a Roman Numeral from 1 to 10: ";
    cin>> num;
    //Output the transformed data
    switch(num){
        case 1:
        case 2:
        case 3:  cout<<"The Roman Numeral for "<< num << " is "<<std::string(num,'I')<<"\n";
                 break;
        case 4:  cout<<"The Roman Numeral for " << num << " is "<<"IV \n";
                 break;
        case 5:  cout<<"The Roman Numeral for " << num << " is "<<"V \n";
                 break;
        case 6:  
        case 7:
        case 8:  cout<<"The Roman Numeral for "<<num<<" is "<<"V"<<std::string((num-5),'I')<<"\n";
                 break;
        case 9:  cout<<"The Roman Numeral for "<<num<<" is "<<"IX \n";
                 break;
        case 10: cout<<"The Roman Numeral for "<<num<<" is "<<"X \n";
                 break;
        default: cout<<"You must enter an integer from 1 to 10. \n";
    }    
    //Exit stage right!
    return 0;
}

