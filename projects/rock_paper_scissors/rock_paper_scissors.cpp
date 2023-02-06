//rock paper scissors
//game implementation

#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    
    int option,pc_option;
    int computer_score=0,player_score=0;
    srand(time(0));
    
    while(true){

	system("clear");
	cout<<"Rock | Paper | Scissors"<<endl;
	cout<<endl;
	cout<<"Choose your option"<<endl;
	cout<<"1.Rock"<<endl<<"2.Paper"<<endl<<"3.Scissors"<<endl;
	cout<<endl;
	cout<<"Computer: "<<computer_score<<"\t"<<"Player: "<<player_score<<endl;
	cin>>option;
	
	do{pc_option = rand() % 10 +1 ;}while(pc_option >3 && pc_option != 0);
	
	switch(option){
	    case 1:
		    if(pc_option == 1)
			continue;
		    else if(pc_option == 2)
			computer_score++;
		    else 
			player_score++;
		    break;
	    case 2:
		    if(pc_option == 1)
			player_score++;
		    else if(pc_option == 3)
			computer_score++;
		    else 
			continue;
		    break;
	    case 3:
		    if(pc_option == 1)
			computer_score++;
		    else if(pc_option == 2)
			player_score++;
		    else
			continue;
		    break;
	}
	if(player_score == 10){
	    cout<<"Player 1 win!!"<<endl;
		break;
	    }
	else if(computer_score==10){
	    cout<<"Computer win!!"<<endl;
	    break;
	}
    }
}
