//constant object
//if object is constant must and should provide the default constructor
//the constructor provided by the compiler is not work

#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A()
	{
		x=10,y=20;
		cout<<"default constructor"<<endl;
	}
	void set_data()
	{
		cout<<"enter data"<<endl;
		cin>>x>>y;
	}
	void get_data()
	const
	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	const A obj;
	//we can't modify the data because object is constant
	//obj.set_data();
	//get_data function also constant so it not create any error
	
	obj.get_data();
}

