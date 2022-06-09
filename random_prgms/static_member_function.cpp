//static member function
//declartion should be inside the class. and definiton outside the class.
//memory is created in data section

#include<iostream>
using namespace std;
class student 
{
		int x;
		static int y;	//declaration
	public:
		student ()
		{
			x=0,y=0;
		}
		static void test()
		{
			cout<<"test-fun"<<endl;
		}
};
//definition of static
int student::y;
int main()
{
	student s;
	student::test();
}
