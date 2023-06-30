//namespace 
//namespace is a block to avoid naming conflits of global variables
//directive method
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
	//sbi is in block,otherwise it shows errors
	{
	using namespace SBI; //directive method
	cout<<"SBI accno: "<<accno<<endl;
	welcome_note();
	}
	using namespace ICICI; //directive method
	cout<<"ICCI accno: "<<accno<<endl;
	welcome_note();
}

