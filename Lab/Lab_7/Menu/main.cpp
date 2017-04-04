/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 23rd, 2017, 12:05 AM
 * Purpose:  Menu to be utilized on Hmwk 4
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //For fixed-point notation.
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and loop
    do{
        //Display Menu
        cout<<endl<<endl<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for ASCII Code Problem"<<endl;
        cout<<"Type 2 Calories Burned Problem"<<endl;
        cout<<"Type 3 Membership Fee Increase Problem"<<endl;
        cout<<"Type 4 for MPH Problem"<<endl;
        cout<<"Type 5 for Pennies Earned Problem 5"<<endl;
        cout<<"Type 6 for Population Problem"<<endl;
        cout<<"Type 7 for Temperature Problem"<<endl;
        cout<<"Type 8 for Greatest and Least Problem"<<endl;
        cout<<"Type 9 for Ocean Risen Problem"<<endl<<endl;
       
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1':{
                    //Declare variables
                    char ASCII = 0;
                    int counter = 0;
                    
                        while(counter<128){
        
                            if(counter % 16 == 0)
                                cout << endl;
                                cout << ASCII << ' ';
                                ASCII++;
            
                            counter ++;
                        }
                    break;
                }
            case '2':{  
                //Declare variables
                double cpm = 3.6; //Calories per minute. 

                //Output the transformed data
                cout << "Minutes Ran | Calories Burned" << endl;
                cout << " "; 
                for (int time = 5; time<31; time+=5){
                    cout<<std::string(6, ' ')<<time<<std::string(4,' ') <<"|   "<<time*cpm<<endl;
                }
                break;
            }
            case '3':{
                    //Declare variables
                    float anual_charge = 2500;
                    float charge_increase = 1.04;

                    //Output the transformed data
                    cout << "Initial price: "<< anual_charge<<endl;
                    cout <<"Yearly price over the next six years:"<<endl;
                    cout << "Year | Cost" <<endl;

                    for (int year = 0; year < 6; year++){
                        anual_charge = anual_charge * charge_increase; 
                        cout << "  "<<year <<"  | "<< anual_charge << endl;
                    }
                break;
            }
            case '4':{
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
                break;
            }
            case '5':{
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
                break;
            }
            case '6':{
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
                break;
            }
            case '7':{
                for (int C = 0; C<21; C++){
                    cout<< setprecision(1)<< fixed;
                    cout<<"When Celsius is "<< C <<" Fahrenheit is: "<<((9.0/5)*C) + 32<<endl;
                }
                break;
            }
            case '8':{
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
                break;
            }
            case '9':{
                    //Declare variables
                    double anual_rise = 1.5;
                    //Output the transformed data
                    cout<<"   Years     |  Millimeters Risen"<<endl;
                    for (int years = 0; years<25; years++ ){
                        if(years>8){
                            cout<<"   "<<years+1<<"        |      "<<1.5*(years+1)<<endl;
                        }
                        else{
                            cout<<"   "<<years+1<<"         |      "<<1.5*(years+1)<<endl;
                        }
                    }
                break;
            }
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}