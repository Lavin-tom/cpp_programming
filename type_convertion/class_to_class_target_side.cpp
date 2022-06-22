//type convertion 
//class to class
//target side

#include<iostream>
using namespace std;
class B; 	//forward declaration 
class A
{
	int a,b;
	public:
	A()
	{
		a=10,b=20;
	}
	operator B();	//type convertion function prototype
};
class B
{
	int m,n;
	public: 
	B()
	{
		m=0,n=0;
	}
	int & get_m()
	{
		return m;
	}
	int & get_n()
	{
		return n;
	}
	void get_data()
	{
		cout<<"m : "<<m<<" n: "<<n<<endl;
	}
};
A::operator B()		//type conversion function defintion 
	{
		B temp;
		temp.get_m()=a;
		temp.get_n()=b;
		return temp;
	}
int main()
{

	A obja;
	B objb;

	objb=obja;
	objb.get_data();
}
