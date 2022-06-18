//function overriding
//virtual function 
//function overriding- functions with same name as base class,with same no of parameters.
//becuase of compile time binding is shifted to run time binding
//virtual function avoid function overriding problem
//when ever the base class object hold the derived class object address at time we call over riding function,
//instead of calling derived class it call base class function.it is not proper ans, so we use virtual function
 
#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
		}
		virtual void test1()			//virtual function
		{
			cout<<"test 1 A "<<endl;
		}
		virtual void test2()			//virtual function
		{
			cout<<"test 2 A "<<endl;
		}
		void test3()				//non virtual function
		{
			cout<<"test 3 A "<<endl;
		}
};
class B: public A
{
	public:
		B()
		{

		}
		//same function as in class A
		//function overriding 
		void test2()				//virtual function because test 2 in base class A is virtual 
		{
			cout<<"test 2 B "<<endl;
		}
		void test3()				//non virtual function
		{
			cout<<"test 3 B "<<endl;
		}
};
class C: public A
{
	public :
		C()
		{

		}
		void test1()
		{
			cout<<"test 1 C "<<endl;	//virtual function ,because in base class A it is virtual 
		}	
		void test3()				//non-vertual function
		{
			cout<<"test 3 C "<<endl;
		}
};

int main()
{
	A *bptr;		//base class pointer
	A a1;			//base class object
	bptr=&a1;		//base class object address is stored in base class pointer
	bptr->test1();		//test1 in A
	bptr->test2();		//test2 in A
	bptr->test3();		//test3 in A
	
	B b1;
	bptr=&b1;
	bptr->test1();		//test1 in A
	bptr->test2();		//test2 in B
	bptr->test3();		//test3 in A

	C c1;
	bptr=&c1;
	bptr->test1();		//test1 in C
	bptr->test2();		//test2 in A
	bptr->test3();		//test3 in A
}	


