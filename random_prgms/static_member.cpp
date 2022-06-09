//static member function
//declartion should be inside the class. and definiton outside the class.
//memory is created in data section

#include<iostream>
using namespace std;
class student 
{
	public:
		int x,y;
		static int z;	//declaration
};
//definition
int student::z;
int main()
{
	student s;
	s.x=100;
	s.z=200;
	cout<<"z : "<<s.z<<endl;
}
