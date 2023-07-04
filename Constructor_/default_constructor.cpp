//constructor
#include<iostream>
using namespace std;
class A
{
	int x,y;
	public :
		//constructor, name same as class name
		A()
		{
			cout<<"costructor "<<endl;
			x=10,y=20;
		}
		void get_data()
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	//x and y are private so initialization is not possible 
	//by using constructor we initializing
	//when ever object is created constructor is automatically invokes and initialize data
	A a1;
	a1.get_data();
}
