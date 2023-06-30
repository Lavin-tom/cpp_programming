//new
//dynamic memory allocation using new

#include<iostream>
using namespace std;
int main()
{
	int *p;
	p= new(int);
	*p=124;
	cout<<"printing using new "<<*p<<endl;
	delete p;
}
