//inheritance basics
//hybrid inheritance 
// A
// B
// C	     E
// 	D

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

//derived class one
//derived from class A
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

//Derived class two
//derived from class B
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
                	cout<<"z: "<<z<<endl;
       		}
};
//Base class E
class E
{
        int q;
        public:
        E(int e)
        {
                cout<<"constr E"<<endl;
                q=e;
        }
        ~E()
        {
                cout<<"destr E"<<endl;
        }
        void get_data_E()
        {
                cout<<"q: "<<q<<endl;
        }
};
//class D is derived from class C,class E 
class D	: public C,public E
{
	int p;
	public:
	//class E is independant so pass value seperate
	D(int a,int b,int c,int d,int e):C(a,b,c),E(e)
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
	D objd(10,20,30,40,50);
	
	cout<<"size of A:"<<sizeof(A)<<endl;
	cout<<"size of B:"<<sizeof(B)<<endl;
	cout<<"size of C:"<<sizeof(C)<<endl;
	cout<<"size of D:"<<sizeof(D)<<endl;
	cout<<"size of E:"<<sizeof(E)<<endl;

	objd.get_data_A();
	objd.get_data_B();
	objd.get_data_C();
	objd.get_data_D();
	objd.get_data_E();
}
