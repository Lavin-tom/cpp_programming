//exception handling
//stack unwinding  : the process of removing function entries from the fucntion call stack at runtime is called stack unwinding
//stack unwinding generally used in exception handling 
//if not proper catch block is not there it generate erroe it is consider as stack unwinding.
//each function is looking for a catch block, if no catch block it immediatly delete the stack block. so can't run completed line

#include<iostream>
using namespace std;
void test3()
{
	cout<<"test3 function"<<endl;
	throw "abc";
	cout<<"test3 fun completed"<<endl;
}
void test2()
{
	cout<<"test2 function"<<endl;
	test3();
	cout<<"test2 fun complete"<<endl;
}
void test1()
{
	cout<<"test1 function"<<endl;
	test2();
	cout<<"test1 fun complete"<<endl;
}
int main()
{

	try
	{
		test1();
	}
	catch(const char *s)
	{
		cout<<s<<endl;
	}
}
