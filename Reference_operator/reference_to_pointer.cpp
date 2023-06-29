//reference to pointer
#include<iostream>
using namespace std;
int main()
{
	int x=10,y=30;
	int *p=&x;		//10
	int* &rp=p;		//rp is the duplicate name for pointer p
	rp=&y;			//same as p=&y;
	*rp=45;			//same as *p=45;
	cout<<*p<<" "<<*rp<<" "<<x<<endl;
	cout<<y<<endl;
}

