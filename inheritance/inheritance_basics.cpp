//inheritance basics
//multiple inheritance 

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

//base class 2
class B
{
	int y;
	public: 	
		B(int b)
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

//base class 3
class C
{
	int z;
	public:
		C(int c)
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
//class D is derived from class A,class B ,class C 
class D	: public A,public B,public C
{
	int p;
	public:
	D(int a,int b,int c,int d):A(a),B(b),C(c)
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
int main()
{
	D objd(10,20,30,40);
	
	cout<<"size of A:"<<sizeof(A)<<endl;
	cout<<"size of B:"<<sizeof(B)<<endl;
	cout<<"size of C:"<<sizeof(C)<<endl;
	cout<<"size of D:"<<sizeof(D)<<endl;

	objd.get_data_A();
	objd.get_data_B();
	objd.get_data_C();
	objd.get_data_D();
}
