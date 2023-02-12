//testing of some functionalities in c++


#include <cstdio>
#include <iostream>
#include <unistd.h>
using namespace std;
char arr[100];
int main(){

    int k=0;
    //assign the char array with '.'
    for(int i=0;i<100;i++)
	arr[i] = '.';

    //assign "Loading" text at the middle of the loading bar
    arr[45]='-';
    arr[46]='L';
    arr[47]='o';
    arr[48]='a';
    arr[49]='d';
    arr[50]='i';
    arr[51]='n';
    arr[52]='g';
    arr[53]='-';

    cout<<"\x1b[2J";

    while(k<100){
	
	if(arr[k] != '.'){}
	else
	    arr[k] = '=';
	
	cout<<"\x1b[H";					    //ANCI escape sequence for set the cursor at home position
	
	for(int i=0; i < 100; i++)
	    cout<<arr[i];
	
	cout<<endl;
	
	//for moving loading test, adding space with for loop
	for(int j=0;j<k-12;j++)
	    cout<<" ";
	
	cout<<"Loading..."<<k+1;
	
	k++;
	usleep(8000 * 5);
    }
    cout<<endl;
}
