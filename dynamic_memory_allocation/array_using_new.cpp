//array using new 
//dma
#include<iostream>
using namespace std;
int main()
{
	int *p;
	//alocating memory using new for 5 integer elements
	p=new int[5];
	cout<<"enter the elements to the array"<<endl;
	for(int i=0;i<5;i++)
		cin>>p[i];
	cout<<"your array"<<endl;
	for(int i=0;i<5;i++)
		cout<<p[i]<<endl;
	//de allocating memory for an array 
	delete []p;
}
