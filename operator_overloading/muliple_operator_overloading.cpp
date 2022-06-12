//operator overloading
//multiple operator overloading
//c5=c1+c2*c3-c4

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

	//operator overloading +
	Complex operator + (Complex b2)
	{
		cout<<"operator overloading +"<<endl;
		Complex ret;
		ret.real=real+b2.real;
		ret.img=img+b2.img;
		return ret;
	}
	//operator overloading -
	Complex operator-(Complex b2)
	{
		cout<<"operator overloading -"<<endl;
		Complex ret;
		ret.real=real-b2.real;
		ret.img=img-b2.img;
		return ret;
	}
	//operator overloading *
	Complex operator *(Complex b2)
	{
		cout<<"operator overloading *"<<endl;
		Complex ret;
		int fi,se,th,fo;
		fi=real*b2.real;
		se=real*b2.img;
		th=img*b2.real;
		fo=img*b2.img;
		ret.real=fi+(fo*-1);
		ret.img=se+th;
		return ret;
	}
};
int main()
{
	Complex c1(10,-2),c2(23,27),c3(2,5),c4(6,-15),c5;
	c1.get_complex();
	c2.get_complex();
	c3.get_complex();
	c4.get_complex();
	//normal method without function overloading
	//c3=c1.addition(c2);
	
	//operator overloading
	c5=c1+c2*c3-c4;
	//c5=c2*c3;
	c5.get_complex();
}
