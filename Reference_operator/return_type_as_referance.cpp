//referace
//return type as a referance
//by using we can reduce the code size

#include<iostream>
using namespace std;
int &add(int,int);
int main()
{
	int a,b,c;
	cout<<"enter the value for a and b"<<endl;
	cin>>a>>b;
	c=add(a,b);
	cout<<"sum:"<<c<<endl;
}
int &add(int x,int y)
{
	int static z=x+y;
	return z;
}
