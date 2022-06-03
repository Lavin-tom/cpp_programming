//convert a decimal no into octal and hexadecimal
//couple of flags used

#include<iostream>
using namespace std;
int main()
{
	int n;
	//it will print base format of oct and hexa decimal
	cout<<showbase;
	//it will show + sign for positive numbers
	cout<<showpos;
	//show in uppercase
	cout<<uppercase;
	cout<<"enter the no"<<endl;
	cin>>n;
	cout<<"decimal: "<<n<<endl;
	cout<<"octal: "<<oct<<n<<endl;
	cout<<"hexadecimal: "<<hex<<n<<endl;

	//last flag used was hexadecimal so code after hex get in hex format
	//consider last flag
	int m;
	cout<<"enter second no"<<endl;
	cin>>m;
	cout<<"m : "<<m<<endl;

	//to avoid this problem again set decimal flags 
	cout<<dec;
	cout<<"m : "<<m<<endl;
}
