//template
//sort an array
//one definition for different parameters
#include<iostream>
using namespace std;

//template for sorting
//bubble sort
template<class type>
void sort(type a[])
{
	type temp;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

//template for display
template<class type>
void display(type a[])
{
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int a[5]={10,5,13,2,8};
	char b[5]={'a','z','f','i','m'};
	float c[5]={10.4,12.7,9.8,10.2,4.3};

	cout<<"before sorting"<<endl;
	display(a);
	display(b);
	display(c);
	
	sort(a);
	sort(b);
	sort(c);

	cout<<"after sorting"<<endl;
	display(a);
	display(b);
	display(c);
}
