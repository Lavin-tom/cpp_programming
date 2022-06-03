//float
#include<iostream>
using namespace std;
int main()
{
	float f;
	cout<<"enter float value"<<endl;
	cin>>f;

	cout<<f<<endl;			//%g format in c
	cout<<scientific<<f<<endl;	//%e format in c
	cout<<fixed<<f<<endl;		//%f format in c
}
