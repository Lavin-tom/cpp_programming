//basics of templates
//wap to swap two elements using function overloading
#include<iostream>
using namespace std;
void swap_data(int &x,int &y)
{
	cout<<"swap int"<<endl;
	int t;
	t=x;
	x=y;
	y=t;
}
void swap_data(char &ch1,char &ch2)
{
	cout<<"swap char"<<endl;
	char t;
	t=ch1;
	ch1=ch2;
	ch2=t;
}
void swap_data(float &f1,float &f2)
{
	cout<<"swap float"<<endl;
	float t;
	t=f1;
	f1=f2;
	f2=t;
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

