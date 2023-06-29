//referance 

#include<iostream>
using namespace std;
int main()
{
	int data=20;
	int &ref=data;
	cout<<"data: "<<data<<endl;
	cout<<"ref: "<<ref<<endl;
	ref=30;
	cout<<"data: "<<data<<endl;
	cout<<"ref: "<<ref<<endl;
}
