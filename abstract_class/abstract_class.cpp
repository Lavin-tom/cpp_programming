//abstract class
#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void test()=0;	//pure virtual fuction
};
class Derived: public Base
{
	public:
		//definiton of pure virtual function
		//because of this test in derived is not abstract
		void test()
		{
			cout<<"test in derived"<<endl;
		}
};
int main()
{
	//Base b1; 	//can't create object because class Base is abstract. 
			//class Base contain atleast one pure virtual function, so it is consider as pure virtual function	
	Derived d1;	//possible,even class Base is inherited to Derived,definition of pure virtual function is in derived
			//so it is not an abstract class.so object creation is possible
	d1.test();
}
