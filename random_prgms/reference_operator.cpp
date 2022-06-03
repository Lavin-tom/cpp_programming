//reference operator

#include<iostream>
using namespace std;
int main()
{
	int x=100;
	int &ref=x;
	//sharing common memory space
	cout<<"&x: "<<&x<<endl;
	cout<<"&ref :"<<&ref<<endl;
	cout<<"x : "<<x<<endl;
	cout<<"ref :"<<ref<<endl;
	//because of same memory,one change will affect other also
	ref=250;
	cout<<"x : "<<x<<endl;
	cout<<"ref : "<<ref<<endl;
}
