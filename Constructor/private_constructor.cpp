//private constructor
//if we create constructor in private, object can't create outside the class.
//so we can create object inside the class. 
//but we can't call the create_object function without object, so we use static
//a class contain only one object is called - Singleton class.
//if we create constructor as private one function should be static , because static functions can call the function without 
//object
//static functions can access only static members only, can't access a non static members
//non static functions can access both static and non static functions 

#include<iostream>
using namespace std;
class A
{
	int x,y;
	A()
	{
		cout<<"private constructor"<<endl;
		x=10,y=20;
	}
	public:
	static void create_object()
	{
		A obj;
		cout<<"create object"<<endl;
		obj.get_data();
	}
	void get_data()
	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	A::create_object();
}
