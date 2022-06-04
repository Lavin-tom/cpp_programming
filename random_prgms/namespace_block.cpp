//namespace 
//namespace is a block to avoid naming conflits of global variables
#include<iostream>
using namespace std;
namespace SBI
{
	int accno=1234;
	void welcome_note()
	{
		cout<<"welcome to SBI"<<endl;
	}
}
namespace ICICI
{
	int accno=1245;
	void welcome_note()
	{
		cout<<"welcome to ICICI"<<endl;
	}
}
int main()
{
	cout<<"SBI accno: "<<SBI::accno<<endl;
	SBI::welcome_note();
	cout<<"ICCI accno: "<<ICICI::accno<<endl;
	ICICI::welcome_note();
}

