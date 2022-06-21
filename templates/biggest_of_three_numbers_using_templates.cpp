//templates
//wap to find the biggest of three numbers using template

#include<iostream>
using namespace std;
template<class type>
type big(type a,type b,type c)
{
	if(a<b)
	{
		if(b<c)
			return c;
		else
			return b;
	}
	else
	{
		if(a>c)
			return a;
		else
			return c;
	}
}
int main()
{
	cout<<"biggest of integer 10,5,17: "<<big(10,5,17)<<endl;
	cout<<"biggest of character a,x,h: "<<big('a','x','h')<<endl;
	cout<<"biggest of float 12.7,10.4,12.8: "<<big(12.7,10.4,12.8)<<endl;
}
