//same name data member
//inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		A()
		{
			x=100;
		}
};
class B: public A
{
	public:
		int x;
		B()
		{
			x=200;
		}
};

int main()
{
B obj;
cout<<"x: "<<obj.x<<endl;		//it will access directly from class B
cout<<"x: "<<obj.A::x<<endl;		//it will access x from class A
}

