//inheritance basics
//size of base and derived class

#include<iostream>
using namespace std;
class base
{
	int x,y;
};
class base2
{
	//empty base class. compiler create 1 byte of memory
};
class derived: public base
{
	int m,n;
};
class derived2: public base
{
	//no member in derived2 class
};
int main()
{
	cout<<"size of base class : "<<sizeof(base)<<endl;
	cout<<"size of base class2 : "<<sizeof(base2)<<endl;
	//size of derived class is base class member and derived class member
	cout<<"size of derived class : "<<sizeof(derived)<<endl;
	cout<<"size of derived class2 : "<<sizeof(derived2)<<endl;
}
