//2D array using new 
//dma
//2x2 array
#include<iostream>
using namespace std;
int main()
{
	int **p,i,j;
	//alocating memory using new for 5 integer elements
	p=new int*[2];
	for(i=0;i<2;i++)
		p[i]=new int[2];
	cout<<"enter the elements to the array"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		cin>>p[i][j];
	}
	cout<<"your array"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		cout<<p[i][j]<<" ";
		cout<<endl;
	}
	//de allocating memory for an array 
	for(i=0;i<2;i++)
	delete[]p[i];
	delete []p;
}
