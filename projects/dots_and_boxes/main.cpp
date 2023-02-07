//dots and boxes implementation

#include <iostream>
using namespace std;


class dotsNBoxes{
private: 
              //cout<<"0123456789012"<<endl;
    char dots[3][14]={"0 0 0 0 0 0 0",
		      "             ",
		      "0 0 0 0 0 0 0"};
public:

    void display(){
	cout<<"0123456789012"<<endl;
	for(int i=0;i<3;i++){
	    for(int j=0;j<14;j++){
		cout<<dots[i][j];
	    }
	    cout<<endl;
	}
    }

    void gamePlay(){
	int coord,i,j;
	cout<<"enter coordinate"<<endl;
	cin>>coord;
	i = coord/10;		//23/10 = 2
	j = coord%10;		//23%10 = 3
	
	if((i%2==0 && j%2==0)||(i%2==1 && j%2==1))
	    cout<<"Not a valid coordinate"<<endl;
	else{
	    if(i%2==0)
		dots[i][j]= '-';
	    else
		dots[i][j]= '|';
	}
    }
};
int main(){
    dotsNBoxes obj;

    while(true){
	system("clear");
	obj.display();
	obj.gamePlay();
    }
}
