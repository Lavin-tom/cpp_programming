//copy constructor
#include<iostream>
using namespace std;
class A
{
	int x,y;
public:

	//default constructor
	A()
	{
		x=10,y=20;
		cout<<"default constructor"<<endl;
	}

	//parameterized constructor
	A(int a, int b)
	{
		x=a,y=b;
		cout<<"parameterized constructor"<<endl;
	}

	//copy constructor
	A(A& temp)
	{
		x = temp.x;
		y = temp.y;
		cout<<"copy constructor"<<endl;
	}

	void get_data()
	{
		cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
	}
};
int main()
{
	A obj_1,obj_2(100,200),obj_3(obj_2),obj_4=obj_1;
	obj_1.get_data();
	obj_2.get_data();
	obj_3.get_data();
	obj_4.get_data();
}
