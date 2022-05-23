//referance
//we can create multiple no of reference to a variable 

#include<iostream>
using namespace std;
int main()
{
	int data=20;
	int &x=data;
	int &y=data;
	int &z=data;
	cout<<"data: "<<data<<endl;
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
	cout<<"z: "<<z<<endl;
}
