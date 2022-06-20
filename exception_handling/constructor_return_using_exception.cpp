//exception handling
//monitoring object is created or not?
//we can return the value from a constr, with the help of exception handling

#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		//constr is not fully executed, so object not created
		A()
		{
			x=10;
			throw x;
			cout<<"constr "<<endl;
		}
		~A()
		{
			cout<<"destr "<<endl;
		}
		void get_data()
		{
			cout<<"x :"<<x<<endl;
		}
};
int main()
{
	try
	{
		A obj;
		cout<<"object created"<<endl;
		obj.get_data();
	}
	catch(int n)
	{
		cout<<"object not created"<<endl;
		cout<<"constr return : "<<n<<endl;
	}
}
