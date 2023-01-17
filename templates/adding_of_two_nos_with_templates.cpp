//adding of two nos using templates
//type id is used to find the type of the data type in run time
//RTTI - Run time type identification

#include <iostream>
using namespace std;

//templates for sum of two numbers
template<class type>
type sum(type a,type b){
	cout<<typeid(a).name()<<" "<<typeid(b).name()<<endl;
	return a+b;
}
int main(){
	int a=10,b=20;
	float c=12.3,d=45.6;
	cout<<sum(a,b)<<endl;
	cout<<sum(c,d)<<endl;
}
