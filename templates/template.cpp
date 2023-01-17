//template basics
//wap to find the sum of two numbers using function overloading
#include<iostream>
using namespace std;
template<class TYPE>
void swap_data(TYPE &,TYPE &);

int main(){
	int num1=10,num2=20;
	char ch1='A',ch2='B';
	float f1=23.4,f2=67.8;
	cout<<"num1: "<<num1<<" num2: "<<num2<<endl;
	cout<<"ch1: "<<ch1<<" ch2: "<<ch2<<endl;
	cout<<"f1: "<<f1<<" f2: "<<f2<<endl;
	swap_data(num1,num2);
	swap_data(ch1,ch2);
	swap_data(f1,f2);
	cout<<"num1: "<<num1<<" num2: "<<num2<<endl;
	cout<<"ch1: "<<ch1<<" ch2: "<<ch2<<endl;
	cout<<"f1: "<<f1<<" f2: "<<f2<<endl;
}
template<class TYPE>
void swap_data(TYPE &a,TYPE &b){
	TYPE temp;
	temp=a;
	a=b;
	b=temp;
}
