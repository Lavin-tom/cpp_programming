//destructor 
//to destroy the object
//both constructor and destructor are called automatically when object is created
//to avoid memory leak we use destructor

#include<iostream>
using namespace std;
class A
{
	char *p;
	public: 
		A()
		{
			cout<<"constr"<<endl;
			p=new char[20];
			cin>>p;
		}
		~A()
		{
			cout<<"destructor"<<endl;
			delete []p;
		}
};
int main()
{
	A obj;
}
