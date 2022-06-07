//friend function
//friend class

#include<iostream>
using namespace std;
class first
{
	int a,b;
	public:
	void set_data()
	{
		cout<<"enter a and b"<<endl;
		cin>>a>>b;
	}
	//now class first is friend to class second
	//but still now we can't access class second from class first
	friend class second;
};
class second
{
	int x,y;
	public: 
	void set_data()
	{
		cout<<"enter x and y"<<endl;
		cin>>x>>y;
	}
	void get_data(first obj)
	{
		cout<<"we can access class first data from class second"<<endl;
		cout<<"a: "<<obj.a<<" b: "<<obj.b<<endl;
	}
};
int main()
{
	first obj1;
	second obj2;
	obj1.set_data();
	obj2.set_data();
	obj2.get_data(obj1);
}
