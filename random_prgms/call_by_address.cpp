//call by address
//change in formal argument affect on actual argument
#include<iostream>
using namespace std;
void function(int*);
int main()
{
	int n;
	cout<<"enter the no"<<endl;
	cin>>n;
	function(&n);
	cout<<"inside the main"<<endl;
	cout<<n<<endl;
}
void function(int *m)
{
	cout<<"inside the function"<<endl;
	cout<<"m: "<<*m<<endl;
	*m=*m+1000;
	cout<<"m: "<<*m<<endl;
}
