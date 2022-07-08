//advanced calculator pgrm
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
	switch(op)
	{
		case '+': 
			res=ival+rval;	//addition
			break;
		case '-':
			res=ival-rval;	//subtraction
			break;
		case '*':
			res=ival*rval;	//multiplication
			break;
		case '/':	
			res=ival/rval;
			break;
		case '%': 
			res=ival%rval;
		default:
		{
			cout<<"something went wrong,try again"<<endl;
			exit(0);
		}
	}
	cout<<"Result: "<<res<<endl;
}

