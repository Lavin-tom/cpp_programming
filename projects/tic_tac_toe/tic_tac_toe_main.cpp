// Tic-Tac- Toe implementation
// self trying


#include <iostream>
#include <string.h>
using namespace std;
static int count = 1;

//validate the game - checking for win/draw
int validateGame(char arr[][6],char player1[], char player2[]){
    char player[10];   
    if(count%2==0)
	strcpy(player,player1);
    else 
	strcpy(player,player2);

    if(arr[0][0]==arr[0][2] && arr[0][0] == arr[0][4]){
	if(arr[0][0]!= '.'){
	    cout<<player<<" win"<<endl;
	    return 1;
	    }
	}
    else if(arr[2][0]==arr[2][2] && arr[2][0] == arr[2][4]){
	if(arr[2][0]!= '.'){
	    cout<<player<<" win"<<endl;
	    return 1;
	    }
	}
    else if(arr[4][0]==arr[4][2] && arr[4][0] == arr[4][4]){
	if(arr[4][0]!= '.'){
	    cout<<player<<" win"<<endl;
	    return 1;
	    }
	}
    else if(arr[0][0]==arr[2][0] && arr[0][0] == arr[4][0]){
	if(arr[0][0]!= '.'){
	    cout<<player<<" win"<<endl;
	    return 1;
	    }
	}
    else if(arr[0][2]==arr[2][2] && arr[0][2] == arr[4][2]){
	if(arr[0][2]!= '.'){
	    cout<<player<<" win"<<endl;
	    return 1;
	    }
	}
    else if(arr[0][4]==arr[2][4] && arr[0][4] == arr[4][4]){
	if(arr[0][4]!= '.'){
	    cout<<player<<" win"<<endl;
	    return 1;
	    }
	}
    else if(arr[0][0]==arr[2][2] && arr[0][0] == arr[4][4]){
	if(arr[0][0]!= '.'){
	    cout<<player<<" win"<<endl;
	    return 1;
	    }
	}
    else if(arr[0][4]==arr[2][2] && arr[0][4] == arr[4][0]){
	if(arr[0][4]!= '.'){
	    cout<<player<<" win"<<endl;
	    return 1;
	    }
	}
    else if(arr[0][0] != '.' && arr[0][2] != '.' && arr[0][4] != '.' &&
	    arr[2][0] != '.' && arr[2][2] != '.' && arr[2][4] != '.' &&
	    arr[4][0] != '.' && arr[4][2] != '.' && arr[4][4] != '.'){
	cout<<"Draw Game...!!"<<endl;
	exit(0);
    }
    return 0;
}



//game play
void gamePlay(char arr[][6],char player1[], char player2[]){
    int option,val = 0;
    char sign;
    char player[10];

    if(count % 2 == 0)
	sign = 'X';
    else
	sign = 'O';

    count++;
    
    if(count%2==0)
	strcpy(player,player1);
    else 
	strcpy(player,player2);

    cout <<player<<" place :  "<<sign<< endl;
    cout<<"	";
    cin >> option;

    system("clear");
    if (option == 11){
	if(arr[0][0] == '.')
	    arr[0][0] = sign;
	else{
	    cout<<"slot already filled...!!";
	    count--;
	}
	}
    else if(option == 12){
	if(arr[0][2] == '.')   
	    arr[0][2] = sign;
	else{
	    cout<<"slot already filled...!!";
	    count--;
	}
	}
    else if(option == 13){
	if(arr[0][4] == '.')
	    arr[0][4] = sign;
	else{ 
	    cout<<"slot already filled...!!";
	    count--;
	}
	}
    else if (option == 21){
	if(arr[2][0] == '.')
	    arr[2][0] = sign;
	else{
	    cout<<"slot already filled...!!";
	    count--;
	}
	}
    else if(option == 22){
	if(arr[2][2] == '.')
	    arr[2][2] = sign;
	else{
	    cout<<"slot already filled...!!";
	    count--;
	}
	}
    else if(option == 23){
	if(arr[2][4] == '.')
	    arr[2][4] = sign;
	else{ 
	    cout<<"slot already filled...!!";
	    count--;
	}
	}
    else if (option == 31){
	if(arr[4][0] == '.')
	    arr[4][0] = sign;
	else{ 
	    cout<<"slot already filled...!!";
	    count--;
	}
	}
    else if(option == 32){
	if(arr[4][2] == '.')
	    arr[4][2] = sign;
	else{ 
	    cout<<"slot already filled...!!";
	    count--;
	}
	}
    else if(option == 33){
	if(arr[4][4] == '.')
	    arr[4][4] = sign;
	else{ 
	    cout<<"slot already filled...!!";
	    count--;
	}
	}
    else if(option == 0)
	    exit(0);
    else{
	cout<<"enter valid index...!"<<endl;
	count--;
    }
    val = validateGame(arr,player1,player2);
    if(val == 1){
	cout<<"Game Over"<<endl;
	exit(0);
    }
}


//to display the current state of board
void displayBoard(char arr[][6]){
    
    cout<<endl;
    for (int i=0; i < 5; i++){
	for (int j=0; j < 5; j++)
	    cout << arr[i][j] <<" ";
    cout << endl;
    }
    cout << endl;
}

int main(){

 char arr[5][6] ={".|.|.",
		"-----",
		".|.|.",
		"-----",
		".|.|."};

system("clear");
char player1[10];
char player2[10];
char x;
cout<<"Tic-Tac-Toe"<<endl;
cout<<"This simple game is implemented in c++ programming language using simple loops and control statements"<<endl;
cout<<"enter player1 name: "<<endl;
cin>>player1;
cout<<"enter player2 name: "<<endl;
cin>>player2;
cout<<"Hello, "<<player1<<" "<<player2<<endl;
cout<<"Read the instruction of game play"<<endl;
cout<<"Game is arranged in matrix form players can access every non filled slot using index values"<<endl;
cout<<"Here is the example"<<endl;
displayBoard(arr);
cout<<"(11)  (12)  (13)"<<endl<<"(21)  (22)  (23)"<<endl<<"(31)  (32)  (33)"<<endl;
cout<<"press 11 for access first slot, 22 for acess second raw second index ..."<<endl;
cout<<"at any time press 0 to quit"<<endl;
cout<<"press any char and press enter to continue......"<<endl;
cin>>x;

system("clear");
displayBoard(arr);
while(1){
    gamePlay(arr,player1,player2);
    displayBoard(arr);
    }
}
