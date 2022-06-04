//wap to check the no is even or odd using boolean

#include<iostream>
using namespace std;
bool iseven(int n)
{
	if(n%2==0)
		return true;
	else
		return false;
}
int main()
{
	bool ret;
	int num;
	cout<<"enter number"<<endl;
	cin>>num;
	ret=iseven(num);	//function call
	cout<<boolalpha<<ret<<endl;
}

