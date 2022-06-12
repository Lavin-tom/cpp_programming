//post increment operator overloading
//using friend function

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
	friend student operator++(student,int); 
};
student operator++(student n,int a)
{
	cout<<"post increment overloading"<<endl;
	student ret;
	ret.x=n.x++;	
	return ret;
}
int main()
{
	student obj1(10),obj2;
	obj1.get_data();
	obj2=obj1++;		//first assign the value to obj1 then decrement 
	obj1.get_data();	//obj2=obj1.operator--(0);	because of post   
	obj2.get_data();
}
