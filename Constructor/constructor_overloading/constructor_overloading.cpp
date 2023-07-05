//constructor
//constructor overloading - same function name but different argument 

#include<iostream>
using namespace std;
class A
{
	int x,y;
	public: A()	//default constr
		{
			cout<<"default constructor"<<endl;
			x=10,y=20;
		}
		A(int a,int b)
		{
			cout<<"parametrized constructor"<<endl;
			x=a,y=b;
		}
		void get_data()
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	A obj1,obj2(125,288);
	obj1.get_data();
	obj2.get_data();
}
