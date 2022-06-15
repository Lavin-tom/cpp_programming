//inheritance basics
//multipath inheritance - Diamond
// 	A
// B	    C
//     D
//virtual function- using virtual function avoid multi path problem, calling two directions

#include<iostream>
using namespace std;

//base class 1
class A
{	
	public:
	int x;
		A()
		{
			cout<<"constr A"<<endl;
			cin>>x;
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
class B: virtual public A
{
	public:
		int y; 	
		B()
		{
			cout<<"constr B"<<endl;
			cin>>y;
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
class C: virtual public A
{
	public:
	int z;
		C()
		{
			cout<<"constr C"<<endl;
			cin>>z;
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
//class D is derived from B and C 
//class B is consider first , call B constr first
class D: public B,public C	
{
	public:
		int p;
	D()
	{
		cout<<"constr D"<<endl;
		cin>>p;
	}
	~D()
	{
		cout<<"destr D"<<endl;
	}
	void get_data_D()
	{
		cout<<"x: "<<x<<endl;	//now x get value only one time
		cout<<"y: "<<y<<endl;
		cout<<"z: "<<z<<endl;
		cout<<"p: "<<p<<endl;
	}
};
//there is no connection b/w B C and D class
int main()
{
	D objd;
	cout<<"size of A:"<<sizeof(A)<<endl;
	cout<<"size of B:"<<sizeof(B)<<endl;
	cout<<"size of C:"<<sizeof(C)<<endl;
	cout<<"size of D:"<<sizeof(D)<<endl;
	
	objd.get_data_D();
}
