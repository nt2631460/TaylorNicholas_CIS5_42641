/* 
 * File:   main.cpp
 * Author: Nicholas Taylor
 * Created on April 4, 2017
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <map> //Used for creating the board and updating the board state.
#include <string> 
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void separateRow();
void createBoard(std::map<int,std::string>);

//Execution 
int main(int argc, char** argv) {
    
    //Creating two maps, one for each side of the board.
    std::map<int,std::string> playerBoard; //Board that keeps track of the user's ships and the AI's hits/misses.
    std::map<int,std::string> enemyBoard; //Board that keeps track of the AI's ships and the user's hits/misses.
    
    
    createBoard(enemyBoard);
    separateRow();
    createBoard(playerBoard);
    
    return 0;
}

void createBoard(std::map<int,std::string> SeaMap){
	cout<<"      |  A   |  B   |  C   |  D   |  E   |  F   |  G   |  H   |  I   |  J   |"<<endl;
	separateRow();
	for(int i = 0; i<10;i++){
		if(i==9){
		cout<<"  "<<i+1<<"  |";
		}
		else{
			cout<<"  "<<i+1<<"   |";
		}
		for(int j = 0; j<10; j++ ){
			int index = i*10+j+1;

			if (SeaMap[index]=="Ship"){
				cout<<"@@@@@@";
			}
			else if(SeaMap[index]=="Hit"){
				cout<<"XXXXXX";
			}
			else if(SeaMap[index]=="Miss"){
				cout<<"------";
			}
			else{
				cout<<"      ";
			}
			cout<<"|";
		}
		cout<<endl;
		separateRow();
	}
}

void separateRow(){
	cout<<"------| -  - | -  - | -  - | -  - | -  - | -  - | -  - | -  - | -  - | -  - |"<<endl;
}
