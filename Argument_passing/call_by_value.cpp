//functions
//call by value
//swapping not done properly because here we use call by value

#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int n1,n2;
	cout<<"enter first and second nos"<<endl;
	cin>>n1>>n2;
	
	cout<<"no before swapping"<<endl;
    cout<<"no1:"<<n1<<endl<<"no2:"<<n2<<endl;

	swap(n1,n2);
	cout<<"no after swapping"<<endl;
	cout<<"no1:"<<n1<<endl<<"no2:"<<n2<<endl;
}
