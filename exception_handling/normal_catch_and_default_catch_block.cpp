//exception handling
//default catch block - they can handle any type of exception

#include<iostream>
using namespace std;
int main()
{
	try
	{
		//throw 10;		//throwing integer
		//throw 'a';		//throwing character
		//throw "abc";		//throwing string
		throw 12.7;		//throwing float but not provide catch block, because of it move to default block 
	}
	//for catch integer
	catch(int n)
	{
		cout<<"catch int : "<<n<<endl;
	}
	catch (char ch)
	{
		cout<<"catch char : "<<ch<<endl;
	}
	catch (const char s)
	{
		cout<<"catch string : "<<s<<endl;
	}
	//default catch block
	//default catch block should be at the end of all other catch block
	catch(...)
	{
		cout<<"default catch block/catch all block"<<endl;
	}
	cout<<"end of pgrm"<<endl;
}
