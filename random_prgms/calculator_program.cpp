//simple calculator pgrm
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	cout<<"please enter expression (we can handle + and -)"<<endl;
	int ival;	//left value
	int rval;	//right value
	char op;
	int res=0;	//result value

	cin>>ival>>op>>rval;	//read values from user like 2+5
	if(op=='+')
		res=ival+rval;	//addition
	else if(op=='-')
		res=ival-rval;	//subtraction
	else
	{
		cout<<"something went wrong,try again"<<endl;
		exit(0);
	}
	cout<<"Result: "<<res<<endl;
}

