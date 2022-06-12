//operator overloading
//assignment operator

#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
	Complex()
	{
		real=0,img=0;
	}
	Complex(int r,int i)
	{
		real=r,img=i;
	}
	void get_complex()
	{
		cout<<"complex number ";
		if(img<0)
			cout<<real<<img<<'j'<<endl;
		else
			cout<<real<<'+'<<img<<'j'<<endl;
	}
	void operator =(Complex b1)
	{
		cout<<"assignment operator overloading ="<<endl;
		real=b1.real;
		img=b1.img;
	}
};
int main()
{
	Complex c1(10,-2),c2;
	//assignment operator
	//compiler provide the defintion
	c2=c1;			//c2.operator=(c1);
	c1.get_complex();
	c2.get_complex();
}
