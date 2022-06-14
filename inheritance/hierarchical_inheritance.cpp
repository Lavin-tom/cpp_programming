//inheritance basics
//hierarchial inheritance 
// 	A
// B	C    D

#include<iostream>
using namespace std;

//base class 1
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

//Class B derived from class A
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
			cout<<"y: "<<y<<endl;
		}

};

//class C derived from class A
class C: public A
{
	int z;
	public:
		C(int a,int c):A(a)
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
                	cout<<"z: "<<z<<endl;
       		}
};
//class D is derived from A 
class D: public A	
{
	int p;
	public:
	D(int a,int d):A(a)
	{
		cout<<"constr D"<<endl;
		p=d;
	}
	~D()
	{
		cout<<"destr D"<<endl;
	}
	void get_data_D()
	{
		cout<<"p: "<<p<<endl;
	}
};
//there is no connection b/w B C and D class
int main()
{
	D objd(10,20);
	C objc(40,50);
	B objb(70,80);
	
	cout<<"size of A:"<<sizeof(A)<<endl;
	cout<<"size of B:"<<sizeof(B)<<endl;
	cout<<"size of C:"<<sizeof(C)<<endl;
	cout<<"size of D:"<<sizeof(D)<<endl;

	objd.get_data_A();
	objc.get_data_A();
	objb.get_data_A();
	objd.get_data_D();
	objc.get_data_C();
	objb.get_data_B();
}
