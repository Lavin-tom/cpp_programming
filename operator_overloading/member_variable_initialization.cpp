//constructor
//member variable initialization 

#include<iostream>
using namespace std;
class A
{
	int x,y;
	public: A():x(10),y(20)
		{
			cout<<"default constructor"<<endl;
		}
		A(int a,int b):x(a),y(b)
		{
			cout<<"parametrized constructor"<<endl;
		}
		void get_data()
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	A obj1,obj2(125,288);
	obj1.get_data();
	obj2.get_data();
}
