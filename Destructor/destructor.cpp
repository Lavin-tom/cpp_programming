//destructor 
//to destroy the object
//both constructor and destructor are called automatically when object is created
#include<iostream>
using namespace std;
class A
{
	int x,y;
	public: 
		A()
		{
			cout<<"default constr"<<endl;
			x=0,y=0;
		}
		~A()
		{
			cout<<"destructor"<<endl;
		}
};
int main()
{
	A obj;
}
