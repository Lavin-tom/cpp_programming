//post decrement operator overloading
//using member function

#include<iostream>
using namespace std;
class student
{
	int x;
	public :
	student()
	{
		x=0;
	}
	student(int a)
	{
		//paramet constr
		x=a;
	}
	void get_data()
	{
		cout<<"x: "<<x<<endl;
	}
	student operator -- (int n)
	{
		cout<<"post decrement overloading"<<endl;
		student ret;
		ret.x=x--;
		return ret;
	}
	
};
int main()
{
	student obj1(10),obj2;
	obj1.get_data();
	obj2=obj1--;			//first assign the value and then decrement
	obj1.get_data();
	obj2.get_data();
}
