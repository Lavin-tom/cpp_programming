//operator overloading
//function call operator

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
	void operator()(int a,int b)
	{
		cout<<"function call operator() overloading"<<endl;
		real=a;
		img=b;
	}
};
int main()
{
	Complex c1;		//call default constr
	c1(10,-4);		//normal function call, because object is already created using default constr,so it is not parameterized constr
	//unary operator 	c1.operator()(10,-4);
	c1.get_complex();
}
