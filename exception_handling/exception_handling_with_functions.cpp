//exception handling
//divide by zero- generate floating point exeption
#include<iostream>
using namespace std;
int division(int n1,int n2)
{
	if(n2==0)
	{
	throw "divide by zero";
	}
	return n1/n2;
}
int main()
{
	int n1,n2,ret;
	cout<<"enter n1 and n2"<<endl;
	cin>>n1>>n2;
	try
	{	
		ret=division(n1,n2);
		cout<<"result: "<<ret<<endl;
	}
	//string is throwing so collect with char pointer
	catch(const char *p)
	{
		cout<<"catch block: "<<p<<endl;
	}
	cout<<"end of pgrm"<<endl;
}
