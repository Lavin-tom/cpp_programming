//adding of two nos using templates
//different type of argument 

#include <iostream>
using namespace std;

//templates for sum of two numbers
template<class type1,class type2>
float sum(type1 a,type2 b){
	cout<<typeid(a).name()<<" "<<typeid(b).name()<<endl;
	return a+b;
}
int main(){
	cout<<sum(10,'a')<<endl;
	cout<<sum(12,2.5)<<endl;
	cout<<sum(32.3,'b')<<endl;
}
