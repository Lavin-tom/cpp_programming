//function overriding
//function overriding- functions with same name as base class,with same no of parameters.
#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		A()
		{
			x=100;
		}
		void get_data()
		{
			cout<<"base: "<<x<<endl;
		}
};
class B: public A
{
	int x;
	public:
		B()
		{
			x=200;
		}
		//same function as in class A
		void get_data()
		{
			cout<<"derived: "<<x<<endl;
		}
};

int main()
{
	B obj;
	obj.get_data();		//it will access own class B
	obj.A::get_data(); 	//it will access class A data because of A::
}

