//exception handling
//set_terminate is a function,normaly it is unhandled exception error occur ,then set _terminate is generated 
//with the help of set_terminate we can run function, if not provide exit by default abort is coming to avoid we use exit

#include<iostream>
using namespace std;
void test()
{
	cout<<"testing line 1"<<endl;
	cout<<"testing line 2"<<endl;
	exit(0);
}
int main()
{
	try
	{
		set_terminate(test);
		throw 10;
	}
	catch(const char *s)
	{
		cout<<"catch : "<<s<<endl;
	}
}
