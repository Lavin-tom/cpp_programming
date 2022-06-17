//function overriding
//virtual function 
//function overriding- functions with same name as base class,with same no of parameters.
//becuase of compile time binding is shifted to run time binding
//virtual function avoid function overriding problem
//when ever the base class object hold the derived class object address at time we call over riding function,
//instead of calling derived class it call base class function.it is not proper ans, so we use virtual function
 
#include<iostream>
using namespace std;
class Base
{
	int x;
	public:
		Base()
		{
			x=100;
		}
		virtual void get_data()
		{
			cout<<"base: "<<x<<endl;
		}
};
class Derived: public Base
{
	int x;
	public:
		Derived()
		{
			x=200;
		}
		//same function as in class A
		//function overriding 
		void get_data()
		{
			cout<<"derived: "<<x<<endl;
		}
};

int main()
{
	Base *bptr; 		//base class pointer
	Derived d1;		//derived class object
	bptr=&d1;		//base class pointer hold the address of derived class object address
				//pointer will get address only at run time, because of this by default it is compile time function 
				//binding, so it get from base class.
	bptr->get_data();	//calling function overriding
}

