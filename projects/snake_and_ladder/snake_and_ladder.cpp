//snake and ladder

#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void displayBoard(char board[][31]){
    for(int i=0;i<10;i++){
	for(int j=0;j<30;j++){
	    cout<<board[i][j]<<"";
	}
	cout<<endl;
    }
}
int throwDice(){
    int dice;
    do{dice =rand() % 10 + 1;} while(dice!=0 && dice > 6);
    return dice;
}

int main(){
    srand(time(0));
    int dice,count=1,player;
    //player2Pos=[9][1];
    char board[][31]={"10|99|98|97|96|95|94|93|92|91",
		      "81|82|83|84|85|86|87|88|89|90",
		      "80|79|78|77|76|75|74|73|72|71",
		      "61|62|63|64|65|66|67|68|69|70",
		      "60|59|58|57|56|55|54|53|52|51",
		      "41|42|43|44|45|46|47|48|49|50",
		      "40|39|38|37|36|35|34|33|32|31",
		      "21|22|23|24|25|26|27|28|29|30",
		      "20|19|18|17|16|15|14|13|12|11",
		      "01|02|03|04|05|06|07|08|09|10"};
    
    int ai=9,aj=0,bi=9,bj=1;
    board[9][0] = 'A';
    board[9][1] = 'B';
    char tempA = '0';
    char tempB = '1';
    int option;
    while(true){
	displayBoard(board);
	cout<<"\nPress 1 to throw dice"<<endl;
	cin>>option;
	system("clear");
	dice = throwDice();
	count++;
	if(count%2==0) player = 1;
	else player = 2;
	
	cout<<"dice: "<<dice<<endl;
	if(player == 1){
	    board[ai][aj]=tempA;
	    ai = ai;
	    aj = aj+dice*3;
	    tempA = board[ai][aj];
	    board[ai][aj]='A';
	    
	}
	else{
	    board[bi][bj]=tempB;
	    bi = bi;
	    bj = bj+dice*3;
	    tempB = board[bi][bj];
	    board[bi][bj]='B';
	}
    }
}
