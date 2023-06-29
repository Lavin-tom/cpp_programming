//referance
//one referance is tried up it cannot be rereferred to another variable
//leads to error

#include<iostream>
using namespace std;
int main()
{
	int data=20;
	int &x=data;
	int data_1=50;
	&x=data_1;			//one referance is tried up it cannot be rereferred to another variable
	cout<<"data: "<<data<<endl;
	cout<<"x: "<<x<<endl;
}
