//exception handling
//divide by zero- generate floating point exeption
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,ret;
	cout<<"enter n1 and n2"<<endl;
	cin>>n1>>n2;
	try
	{
		if(n2==0)
			throw "dividing by zero";
		ret=n1/n2;
		cout<<"result: "<<ret<<endl;
	}
	//string is throwing so collect with char pointer
	catch(const char *p)
	{
		cout<<"catch block: "<<p<<endl;
	}
	cout<<"end of pgrm"<<endl;
}
