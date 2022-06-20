//exception handling
//rethrow an exception the same exception generated in another catch block

#include<iostream>
using namespace std;
void user()
{
	cout<<"user function"<<endl;
	throw "very bad";
}
void customer_care()
{
	try
	{
		user();
	}
	catch(const char *s)
	{
		//cout<<"in customer_care() "<<s<<endl;
		throw s;
	}
}
int main()
{
	try
	{
		customer_care();
	}
	catch(const char *s)
	{
		cout<<"in main catch : "<<s<<endl;
	}
}
