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
    double payment = 1;
    double total_pay = 0;
    int days;
    //Input data
    cout << "How many days did you work for? ";
    cin >> days;
    //Map inputs to outputs or process the data
    for (int i = 0; i<days; i++){
        total_pay += payment;
        cout << "Amount made on day "<< i+1 << ":  "<< (payment/100) << endl;
        payment *= 2;
    }
    //Output the transformed data
    cout <<"-------------------------"<<endl;
    cout << "Total amount earned:   " << (total_pay/100) <<endl;
    //Exit stage right!
    return 0;
}

