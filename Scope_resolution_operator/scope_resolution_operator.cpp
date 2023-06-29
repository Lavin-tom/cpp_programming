//scope resolution operator
#include<iostream>
using namespace std;
int x=100;
int y=200;
int main()
{
	int x=10;
	cout<<"local x: "<<x<<endl;
	//to get global variable in local when local variable of same name
	cout<<"global x: "<<::x<<endl;
	cout<<"y : "<<y<<endl;
}
