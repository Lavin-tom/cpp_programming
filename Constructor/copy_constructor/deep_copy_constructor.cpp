//copy constructor
//deep copy
//copy one object data to another object with the help of user provided copy constructor (explicit constructor)
//- /assignmet operator overloaded operator then it is called as deep copy
//if one object modified then another object will not get modify
//both objects are pointing to different memory

#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:

	//definisions are outside the class
	A();
	A(int,int);
	A(A&);
	void print_data();
};

//default constructor
A::A()
{
	x=100,y=200;
	cout<<"default constructor"<<endl;
}

//parameterized constructor
A::A(int a,int b)
{
	x=a,y=b;
	cout<<"parameterized constructor"<<endl;
}

//copy constructor
A::A(A& obj)
{
	x = obj.x;
	y = obj.y;
	cout<<"copy constructor"<<endl;
}

void A::print_data()
{
	cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
}

int main()
{
	A obj_1;				//default constructor
	A obj_2(3000,4000);		//parameterized constructor
	A obj_3(obj_1);			//copy constructor

	obj_1.print_data();
	obj_2.print_data();
	obj_3.print_data();

}
