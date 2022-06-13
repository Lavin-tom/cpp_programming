//inheritance basics
//paramet constructor and destructor 

#include<iostream>
using namespace std;
class A
{
	int x;	
	public:	
		A(int a)
		{
			cout<<"constr A"<<endl;
			x=a;
		}
		~A()
		{
			cout<<"destr A"<<endl;
		}
		void get_data_A()
		{
			cout<<"x: "<<x<<endl;
		}
};

class B: public A
{
	int y;
	public: 	
		B(int a,int b):A(a)
		{
			cout<<"constr B"<<endl;
			y=b;
		}
		~B()
		{
			cout<<"destr B"<<endl;
		}
		void get_data_B()
		{
			cout<<"Y: "<<y<<endl;
		}

};
class C: public B
{
	int z;
	public:
		C(int a,int b,int c):B(a,b)
		{
			cout<<"constr C"<<endl;
			z=c;
		}
		~C()
		{
			cout<<"destr C"<<endl;
		}
		void get_data_C()
		{
			cout<<"Z: "<<z<<endl;
		}
};
int main()
{
	C obj(10,20,30);
	cout<<"size of c:"<<sizeof(obj)<<endl;
	obj.get_data_A();
	obj.get_data_B();
	obj.get_data_C();
}
