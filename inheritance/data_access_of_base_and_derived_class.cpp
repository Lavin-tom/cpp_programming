//inheritance basics
//data access of base and derived class members 

#include<iostream>
using namespace std;
class base
{
	public:
		int x,y;
};
class derived: public base
{
	public: 	
		int m,n;
};
int main()
{
	base b1;
	derived d1;
	cout<<"x: "<<b1.x<<" y: "<<b1.y<<endl;
	//derived class can acess data from base class
	cout<<"x: "<<d1.x<<" y: "<<d1.y<<endl;
	
	//base class can't access datas of derived class
	//cout<<"m: "<<b1.m<<" y: "<<b1.n<<endl;
	
	cout<<"m: "<<d1.m<<" n: "<<d1.n<<endl;
}
