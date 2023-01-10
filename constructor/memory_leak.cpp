//memory leak
//
#include<iostream>
using namespace std;
class A
{
	char s;
	public:
	A()
	{
		cout<<"constructor"<<endl;
		s = new char[20];
		cin >> s;
	}
	~A()
	{
		cout<<"destructor"<<endl;
		delete [] s;
	}
}
int main()
{
	A obj;
}
