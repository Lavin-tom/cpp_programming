//templates
//different data members

#include<iostream>
using namespace std;
template<class type1,class type2>
class A
{
	type1 x;
	type2 ch;
	public:
	A();
	A(type1 a,type2 b);
       	void get_data();	
};

//constr
template<class type1,class type2>
A<type1,type2>::A()
{
	cout<<"constr"<<endl;
}

//para constr
template<class type1,class type2>
A<type1,type2>::A(type1 a,type2 b)
{
	x=a;
	ch=b;
}

template<class type1,class type2>
void A<type1,type2>::get_data()
{
	cout<<x<<" "<<ch<<endl;
}

int main()
{
	A<int,char>obj1(10,'A');
	A<char,float>obj2('B',56.7f);
	obj1.get_data();
	obj2.get_data();
}
