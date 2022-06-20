//exception handling
//default catch block - they can handle any type of exception

#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 10;		//throwing integer
		//throw 'a';		//throwing character
		//throw "abc";		//throwing string
	}
	//for catch integer
	catch(...)
	{
		cout<<"default catch block/catch all block"<<endl;
	}
	cout<<"end of pgrm"<<endl;
}
