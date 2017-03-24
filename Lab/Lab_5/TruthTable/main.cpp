/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Truth Table
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
    bool x,y;
    
    //Output the table Header
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    
    //Determine first row in the table
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"   ";
    //Filled in first row.
    cout<<(x^y? "T" : "F")<<"    ";
    cout<<(x^y^y? "T" : "F")<<"     ";
    cout<<(x^y^x? "T" : "F")<<"      ";
    cout<<(!(x||y)? "T" : "F")<<"       ";
    cout<<(!x&&!y? "T" : "F")<<"      ";
    cout<<(!(x&&y)? "T" : "F")<<"      ";
    cout<<(!x||!y? "T" : "F")<<"   ";
    cout<<endl;
    
    //Determine second row in the table
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"   ";
    //Filled in second row.
    cout<<(x^y? "T" : "F")<<"    ";
    cout<<(x^y^y? "T" : "F")<<"     ";
    cout<<(x^y^x? "T" : "F")<<"      ";
    cout<<(!(x||y)? "T" : "F")<<"       ";
    cout<<(!x&&!y? "T" : "F")<<"      ";
    cout<<(!(x&&y)? "T" : "F")<<"      ";
    cout<<(!x||!y? "T" : "F")<<"   ";
    
    //Exit stage right!
    return 0;
}

