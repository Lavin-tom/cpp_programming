//macro side effect

#include<iostream>
using namespace std;
#define mul(a,b) a*b
int main()
{
	int c,d;
	c=mul(10,20);
	d=mul(10+2,9+3);
	cout<<"c: "<<c<<" d: "<<d<<endl;
}
