//swapping using function over loading
#include<iostream>
using namespace std;
void swap_data(int a,int b)
{
	int t;
	cout<<"integer swaping"<<endl;
	t=a;
	a=b;
	b=t;
	cout<<"a: "<<a<<" b: "<<b<<endl;
}
void swap_data(char ch1,char ch2)
{
	char t;
        cout<<"char swaping"<<endl;
        t=ch1;
        ch1=ch2;
        ch2=t;
        cout<<"ch1: "<<ch1<<" ch2: "<<ch2<<endl;
}
void swap_data(float f1,float f2)
{
 	float t;
        cout<<"float swaping"<<endl;
        t=f1;
        f1=f2;
        f2=t;
        cout<<"f1: "<<f1<<" f2: "<<f2<<endl;
}
int main()
{
	int a=10,b=20;
	char ch1='A',ch2='B';
	float f1=12.3,f2=34.5;
	cout<<"before swpping"<<endl;
	cout<<"a: "<<a<<" b: "<<b<<endl;
	cout<<"ch1: "<<ch1<< "ch2: "<<ch2<<endl;
	cout<<"f1: "<<f1<< " f2: "<<f2<<endl;
	cout<<"after swaping"<<endl;
	swap_data(a,b); 
    swap_data(ch1,ch2);
	swap_data(f1,f2);
}
