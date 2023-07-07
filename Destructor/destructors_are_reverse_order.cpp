//destructor 
//to destroy the object
//both constructor and destructor are called automatically when object is created
//use destructor to avoid memory leak 
//destructors are in reverse order

#include<iostream>
using namespace std;
class A
{
	char *p;
	public: 
		A()
		{
			cout<<"constr "<<this<<endl;
		}
		~A()
		{
			cout<<"destructor "<<this<<endl;
		}
};
int main()
{
	A obj1,obj2,obj3;
}
