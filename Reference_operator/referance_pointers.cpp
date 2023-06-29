//referance
//we can create referance to pointers

#include<iostream>
using namespace std;
int main()
{
	int data=20;
	int *r=NULL;
	int *&q=r;
	r=&data;
	cout<<"r: "<<*r<<endl;
	cout<<"q: "<<*q<<endl;
}
