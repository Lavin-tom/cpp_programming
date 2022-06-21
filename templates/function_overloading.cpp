//function overloading

#include<iostream>
#define pi 3.14
using namespace std;

//first template
template<class type>
double area(type r)
{
	cout<<"area of circle"<<endl;
	cout<<typeid(r).name()<<endl;
	return pi*r*r;
}
//scope of first template is over, so again create new template
template<class type>
double area(type l,type b)
{
	cout<<"area of rectangle"<<endl;
	cout<<typeid(l).name()<<" "<<typeid(b).name()<<endl;
	return l*b;
}
int main()
{
	cout<<area(3)<<endl;
	cout<<area(3.2)<<endl;
	cout<<area(13,5)<<endl;
	cout<<area(13.7,8.3)<<endl;
}
