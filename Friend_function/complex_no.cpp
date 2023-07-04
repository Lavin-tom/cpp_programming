//complex nos
#include<iostream>
using namespace std;
class Complex
{
	int real,img;
public:
	void set_data()
	{
		cout<<"enter real and img"<<endl;
		cin>>real>>img;
	}
	void get_data()
	{
		if(img<0)
			//real+imgj     4+15j
			cout<<real<<img<<"j"<<endl;
		else
			cout<<real<<"+"<<img<<"j"<<endl;
	}
	void add(Complex obj1,Complex obj2)
	{
		real=obj1.real+obj2.real;
		img=obj1.img+obj2.img;
	}
};
int main()
{
	Complex c1,c2,c3;
	c1.set_data();
	c2.set_data();
	c1.get_data();
	c2.get_data();

	c3.add(c1,c2);
	c3.get_data();
}
