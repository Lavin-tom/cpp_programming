//function overloadin and templates
//compile time polymorphism

#include <iostream>
#define pi 3.14
using namespace std;
template<class type>
type area(type l,type b){
	cout<<"area of rectangle"<<endl;
	return l*b;
}
template<class type1>
double area(type1  r){
	cout<<"area of circle "<<endl;
	return pi*r*r;
}
int main(){
	cout<<area(3)<<endl;
	cout<<area(2.5,3.5)<<endl;
}
