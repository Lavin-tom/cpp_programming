//printf and scanf in cpp

#include<iostream>
using namespace std;
#include<stdio.h>

int main()
{
	int value;
	printf("printing using printf\n");
	cout<<"printing using cout"<<endl;
	printf("enter value\n");
	scanf("%d",&value);
	printf("value 1: %d\n",value);
}
