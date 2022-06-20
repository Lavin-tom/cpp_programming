//exception handling
//one try with multiple catch block

#include<iostream>
using namespace std;
int main()
{
	try
	{
		//throw 10;		//throwing integer
		//throw 'a';		//throwing character
		throw "abc";		//throwing string
	}
	//for catch integer
	catch(int p)
	{
		cout<<"res: "<<p<<endl;
	}
	//for catch character
	catch(char ch)
	{
		cout<<"res: "<<ch<<endl;
	}
	//for catch string
	catch(const char *s)
	{
		cout<<"res: "<<s<<endl;
	}
	cout<<"end of pgrm"<<endl;
}
