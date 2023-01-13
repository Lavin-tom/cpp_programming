//exception handling

#include<iostream>
using namespace std;
int main()
{
	int num1,num2,res;
	cout<<"enter num1 and num2 "<<endl;
	cin>>num1>>num2;
	try				//monitoring code
	{
		if(num2==0)
			throw "dividing by zero";	
		res=num1/num2;
		cout<<"result: "<<res<<endl;
	}
	catch(const char *p)
	{
		cout<<"catch block: "<<p<<endl;
	}
	cout<<"end"<<endl;
}
