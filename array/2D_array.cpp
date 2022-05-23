//2D array

#include<iostream>
using namespace std;
int main()
{
	int row,col;
	int **p=NULL;
	cout<<"enter the row and col"<<endl;
	cin>>row>>col;
		p=new int *[row];
	cout<<"enter the elements to the array"<<endl;

	for(int i=0;i<row;i++)
	{
		p[i]=new int[col];
		for(int j=0;j<col;j++)
			cin>>p[i][j];
	}

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
	//delete the alloated memory
	for(int i=0;i<row;i++)
	{
		delete[]p[i];		//delete the array
		p[i]=NULL;
	}
	delete []p;
	p=NULL;
}
