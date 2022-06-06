//malloc 
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int *p;
	p=(int *)malloc(sizeof(int));
	*p=124;
	cout<<"printing using malloc "<<*p<<endl;
	free(p);
}
