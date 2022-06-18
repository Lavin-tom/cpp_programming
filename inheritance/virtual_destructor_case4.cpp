//virtual destructor
//case-4 - with pointers
//avoid memory leak using delete
//multi-level inheritance
 
#include<iostream>
using namespace std;
class A
{
	char *s1;
	public:
		A()
		{
			cout<<"constr A"<<endl;
			s1=new char[20];
		}
		~A()
		{
			cout<<"destr A"<<endl;
			delete [] s1;
		}
};
class B: public A
{
	char *s2;
	public:
		B()
		{
			cout<<"constr B"<<endl;
			s2=new char[20];
		}
		~B()
		{
			cout<<"destr B"<<endl;
			delete [] s2;
		}
};
class C: public B
{
	char *s3;
	public :
		C()
		{
			cout<<"constr C"<<endl;
			s3=new char[20];
		}
		~C()
		{
			cout<<"destr C"<<endl;
			delete []s3;
		}
};

int main()
{
	//with pointer
	A *ptr;
	ptr=new C;
	//base class pointer hold the derived class dynamic object
	//constructor will execute
	//destructor not execute because dynamic memory allocation
	//destructor not call until delete. memory leak is happened here
	//to avoid we use delete
	delete ptr;
	cout<<"size of C: "<<sizeof(C)<<endl;
}	


