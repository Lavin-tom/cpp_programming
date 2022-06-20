//abstract class
#include<stdio.h>
using namespace std;
class Base
{
	public:
		virtual void test()=0;	//pure virtual fuction
};
class Derived: public Base
{

};
int main()
{
	Base b1; 	//can't create object because class Base is abstract. 
			//class Base contain atleast one pure virtual function, so it is consider as pure virtual function	
	Derived d1;	//can't create ,because class Base is inherited to Derived, it also abstract
}
