//basics of templates
//wap to swap two elements using function overloading and template

#include<iostream>
using namespace std;

//template
//template name is user defined, anything is possible 
template<class TYPE>
void swap_data(TYPE &x,TYPE &y)
{
	cout<<"template function"<<endl;
	TYPE t;
	t=x;
	x=y;
	y=t;
}

int main()
{
	int x=10,y=20;
	char ch1='A',ch2='B';
	float f1=13.4,f2=25.6;
	swap_data(x,y);
	swap_data(ch1,ch2);
	swap_data(f1,f2);
	cout<<x<<" "<<y<<endl;
	cout<<ch1<<" "<<ch2<<endl;
	cout<<f1<<" "<<f2<<endl;
}

