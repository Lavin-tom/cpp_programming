//referance
//initialization and declaration of referance should be in a single statement
//leads to error

#include<iostream>
using namespace std;
int main()
{
	int data=20;
	int &x;
	&x=data;			//initialization and referancs should be in a single statement
	cout<<"data: "<<data<<endl;
	cout<<"x: "<<x<<endl;
}
