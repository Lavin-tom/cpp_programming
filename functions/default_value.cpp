//default value

#include<iostream>
using namespace std;
//default value is set to zero
int add(int,int,int=0,int=0);
int main()
{
	int sum;
	cout<<"sum:"<<add(10,20)<<endl;
	cout<<"sum:"<<add(10,20,30)<<endl;
	cout<<"sum:"<<add(10,20,30,40)<<endl;
}
//single definition for different no of input variables
int add(int a,int b,int c,int d)
{
	return a+b+c+d;
}
