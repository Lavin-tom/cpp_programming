//inheritance basics
//constructor and destructor 

#include<iostream>
using namespace std;
class A
{
	int x;	
	public:	
		A()
		{
			cout<<"constr A"<<endl;
		}
		~A()
		{
			cout<<"destr A"<<endl;
		}
};

class B: public A
{
	int y;
	public: 	
		B()
		{
			cout<<"constr B"<<endl;
		}
		~B()
		{
			cout<<"destr B"<<endl;
		}

};
class C: public B
{
	int z;
	public:
		C()
		{
			cout<<"constr C"<<endl;
		}
		~C()
		{
			cout<<"dest C"<<endl;
		}
};
int main()
{
	C obj;
	cout<<"size of c:"<<sizeof(obj)<<endl;
}
