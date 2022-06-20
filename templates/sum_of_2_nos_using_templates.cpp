//basics of templates
//wap to sum of two numbers using function overloading and template

#include<iostream>
using namespace std;

//template
//template name is user defined, anything is possible 
template<typename TYPE>
TYPE sum(TYPE x,TYPE y)
{
	cout<<"template function"<<endl;
	cout<<typeid(x).name()<<" "<<typeid(y).name()<<endl;
	return x+y;
}

int main()
{
	cout<<sum(10,20)<<endl;
	cout<<sum('0','1')<<endl;
	cout<<sum(12.3,25.4)<<endl;
}

