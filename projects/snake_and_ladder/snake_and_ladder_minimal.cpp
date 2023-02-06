//snake and ladder
//simple snake and ladder game implementation 



#include <iostream>
#include <ctime>
#include<stdlib.h>
#include<string.h>
using namespace std;

int count=1;
int p1Pos=0,p2Pos=0,flag1=0,flag2=0;
int checkStatus(int pPos){

	//snake
	if(pPos==98){ pPos=28; cout<<"snake"<<endl;}
	else if(pPos==92) { pPos=51; cout<<"Oops!! Snake found !! You are at position "<<pPos<<endl;}
	else if(pPos==83) { pPos=19; cout<<"Oops!! Snake found !! You are at position "<<pPos<<endl;}
	else if(pPos==73) { pPos=1;  cout<<"Oops!! Snake found !! You are at position "<<pPos<<endl;}
	else if(pPos==69) { pPos=33; cout<<"Oops!! Snake found !! You are at position "<<pPos<<endl;}
	else if(pPos==59) { pPos=17; cout<<"Oops!! Snake found !! You are at position "<<pPos<<endl;}
	else if(pPos==52) { pPos=11; cout<<"Oops!! Snake found !! You are at position "<<pPos<<endl;}
	else if(pPos==48) { pPos=9;  cout<<"Oops!! Snake found !! You are at position "<<pPos<<endl;}
	else if(pPos==46) { pPos=5;  cout<<"Oops!! Snake found !! You are at position "<<pPos<<endl;}
	
	//ladder
	else if(pPos==8)  { pPos=26;  cout<<"Great!! you got a ladder !! You are at position "<<pPos<<endl;}
	else if(pPos==50) { pPos=91;  cout<<"Great!! you got a ladder !! You are at position "<<pPos<<endl;}
	else if(pPos==62) { pPos=96;  cout<<"Great!! you got a ladder !! You are at position "<<pPos<<endl;}
	else if(pPos==59) { pPos=87;  cout<<"Great!! you got a ladder !! You are at position "<<pPos<<endl;}
	else if(pPos==80) { pPos=100; cout<<"Great!! you got a ladder !! You are at position "<<pPos<<endl;}
	return pPos;
}
void displayStatus(char player1[], char player2[],int dice,int count){
	int status;
	cout<<"Snake n Ladder"<<endl;
	cout<<"----------------"<<endl;
	cout << "\n\t\tSNAKE AT POSITION\n";
	cout << "\n\tFrom 98 to 28\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 73 to 1\n\tFrom 69 to 33\n\tFrom 59 to 17\n\tFrom 52 to 11\n\tFrom 48 to 9\n\tFrom 46 to 5\n\n";
	cout<<"---------------------------------"<<endl;	
	cout << "\n\t\t LADDER AT POSITION\n";
	cout << "\n\tFrom 8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n";
	cout << endl;
	cout<<"Dice value: "<<dice<<endl;
    
    if(count%2==0){
	if(dice == 1 && p1Pos==0) flag1=1;
	if(flag1==1 && p1Pos+dice <= 100){
	p1Pos = p1Pos+dice;
	status = checkStatus(p1Pos);
	p1Pos = status;
	}
	}
    else {
	if(dice == 1 && p2Pos==0) flag2=1;
	if(flag2==1 && p2Pos+dice <= 100){
	p2Pos = p2Pos+dice;
	status = checkStatus(p2Pos);
	p2Pos = status;
	}
	}

    if(dice == 6){ cout<<"Wow you got one more chance to throw dice!!"<<endl; count--;}
    cout<<endl;
    cout<<player1<<" at position "<<p1Pos<<endl;
    cout<<player2<<" at position "<<p2Pos<<endl;
    if(p1Pos>=100)  { cout<<player1<<" is the winner!!"<<endl; exit(0);}
    else if(p2Pos>=100) {cout<<player2<<" is the winner!!"<<endl; exit(0);}
}
int playerStatus(int count,char player1[],char player2[]){

    int option,dice;
    char player[10];
    if(count%2==0) strcpy(player,player1);
    else strcpy(player,player2);
    cout<<endl;
    cout<<player<<" press any key to throw dice"<<endl;
    cin>>option;
    system("clear");

        do{dice = rand()  % 10 +1;}while(dice != 0 && dice >6);
    
    return dice;
}

int main(){
    system("clear");
    srand(time(0));
    char player1[10],player2[10];
    cout<<"enter name of player1"<<endl;
    cin>>player1;
    cout<<"enter name of player2"<<endl;
    cin>>player2;
    int dice;
    while(true){
	count++;
	dice = playerStatus(count,player1,player2);
	displayStatus(player1,player2,dice,count);
    }
}
