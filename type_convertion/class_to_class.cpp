//type convertion 
//class to class

#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
	A()
	{
		a=10,b=20;
	}
	int get_a()
	{
		return a;
	}
	int get_b()
	{
		return b;
	}
};
class B
{
	int m,n;
	public: 
	B()
	{
		m=0,n=0;
	}
	B(A obja)
	{
		m=obja.get_a();
		n=obja.get_b();
	}
	void get_data()
	{
		cout<<"m : "<<m<<" n: "<<n<<endl;
	}
};
int main()
{
	A obja;
	B objb;

	objb=obja;
	objb.get_data();
}
