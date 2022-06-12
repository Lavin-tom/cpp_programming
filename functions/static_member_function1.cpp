//static member function
//declartion should be inside the class. and definiton outside the class.
//memory is created in data section

#include<iostream>
using namespace std;
class student 
{
		int x;
		static int y;	//declaration
		//constructor is in private 
		//so object can't created in main
		student()
		{
			cout<<"constr"<<endl;
			x=0,y=0;
		}
	public:
		//creating object inside the class
		static void create_object()
		{
			student obj;
			obj.get_data();
		}
		void get_data()
		{
			cout<<"x: "<<x<<" y: "<<y<<endl;
		}
};
//definition of static
int student::y;
int main()
{
	student :: create_object();

}
