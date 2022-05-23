//one diamentional array

#include<iostream>
using namespace std;
int main()
{
	int *p=NULL;
	int s;
	cout<<"enter the no of elements"<<endl;
	cin>>s;
	p=new int[s];
	cout<<"enter the array elements"<<endl;
	for(int i=0;i<s;i++)
		cin>>p[i];
	cout<<"elements of the array:"<<endl;
	for(int i=0;i<s;i++)
		cout<<p[i]<<" ";
	delete[]p;	//delete the allocated memory
	p=NULL;
}

