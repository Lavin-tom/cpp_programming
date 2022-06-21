//templates
//different argument
#include<iostream>
using namespace std;

//two different argument so we need two type 
template<class Type1,class Type2> 
double sum(Type1 a,Type2 b)
{
	cout<<typeid(a).name()<<" "<<typeid(b).name()<<endl;
	return(a+b);
}
int main()
{
	cout<<"10+20 = "<<sum(10,20)<<endl;
	cout<<"10+12.3 ="<<sum(10,12.3)<<endl;
	cout<<"a+15 = "<<sum('a',15)<<endl;
	cout<<"34.4+b= "<<sum(34.4,'b')<<endl;
}
