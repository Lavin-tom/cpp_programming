//snake game testing


#include <cstdio>
#include <curses.h>
#include<iostream>
#include<unistd.h>
#include<ncurses.h>
#include<ctime>
using namespace std;


void display(char grid[][10]){
    for (int i=0;i<10; i++){
	for (int j=0;j<10; j++){
	    cout<<grid[i][j]<<" ";
	}
	cout<<endl;
    }
}

int main(){
    srand(time(NULL));
    //initialize ncurses
    initscr();
    cbreak();
    noecho();

    int size = 10;
    char grid[10][10];
    int sx,sy;	    //snake head
    int length = 2;
    int score = 0;
    int fruitx=5, fruity=5;
    //char dir;

    //basics structure
    for (int i=0; i<size; i++){
	for (int j=0; j<size; j++){
	    if( i==0 || i==size-1)
		grid[i][j] = '-';
	    else if(j==0 || j==size-1)
		    grid[i][j] = '|';
	    else 
		grid[i][j]=' ';
	}
    }
    int x1=0,y1=6;
    sx = 1;
    sy = size/2;

    grid[sx][sy] = '@';
    //grid[sx][sy+1] = '*';
    //grid[sx][sy+2] = '*';

    while(true){
	
    grid[fruitx][fruity]='0';
	//cin>>dir;
	char dir = getch();
	switch(dir){
	    case 'w':
		grid[x1][y1]=' ';
		grid[sx][sy]=' ';
		x1 = sx;
		y1 = sy;
		sx--;
		if(sx == 0)
		    sx = 8;
		grid[sx][sy]='@';
		grid[x1][y1]='#';
		break;
	    case 'a':
		grid[x1][y1]=' ';
		grid[sx][sy]=' ';
		x1 = sx;
		y1 = sy;
		sy--;
		if(sy == 0)
		    sy = 8;
		grid[sx][sy]='@';
		grid[x1][y1]='#';
		break;
	    case 's':
		grid[x1][y1]=' ';
		grid[sx][sy]=' ';
		x1 = sx;
		y1 = sy;
		sx++;
		if(sx == 9)
		    sx = 1;
		grid[x1][y1]='#';
		grid[sx][sy]='@';
		break;
	    case 'd':
		grid[x1][y1]=' ';
		grid[sx][sy]=' ';
		x1 = sx;
		y1 = sy;
		sy++;
		if(sy == 9)
		    sy = 1;
		grid[sx][sy]='@';
		grid[x1][y1]='#';
		break;
	}
	if(sx == fruitx && sy == fruity){
	    score++;
	    do{
	        fruitx = rand() % 10 + 1;
	        fruity = rand() % 10 - 1;
	    }while(sx!=fruitx && sy!=fruity && sx!=0 && sx!=9 && sy!=0 && sy!=9);
	}
	system("clear");
	display(grid);
	cout<<"score: "<<score<<endl;
	refresh();
	usleep(1);
    }
    endwin();
    return 0;
}
