//subtraction of matrix

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int row,col;
	int **p1=NULL;
	int **p2=NULL;
	int **d=NULL;
	cout<<"enter the row and col of matrix"<<endl;
	cin>>row>>col;

	if(row!=col)
	{
		cout<<"not possible..row and col will be same"<<endl;
		exit(0);
	}

	p1=new int *[row];
	cout<<"enter the elements of first matrix"<<endl;
	for(int i=0;i<row;i++)
	{
		p1[i]=new int [col];
		for(int j=0;j<col;j++)
		{
			cin>>p1[i][j];
		}
	}
	cout<<"enter the elements of second matrix"<<endl;
	p2=new int *[row];
	for(int i=0;i<row;i++)
	{
		p2[i]=new int [col];
		for(int j=0;j<col;j++)
		{
			cin>>p2[i][j];
		}
	}
	d=new int *[row];	
        for(int i=0;i<row;i++)
        {
                d[i]=new int [col];
                for(int j=0;j<col;j++)
                {
                        d[i][j]=p1[i][j]-p2[i][j];
                }
        }
	cout<<"Differance of matrix:"<<endl;
        for(int i=0;i<row;i++)
        {
                for(int j=0;j<col;j++)
                {
                        cout<<d[i][j]<<" ";
                }
		cout<<endl;
        }

}

