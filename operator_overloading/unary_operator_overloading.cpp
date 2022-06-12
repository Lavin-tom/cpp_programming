//operator overloading
//unary operator overloading
#include<iostream>
using namespace std;
class student 
{	
	int x,y;
	public:
		student ()
		{
			//default constr
		}
		student (int a,int b):x(a),y(b)
		{

		}
		void get_data()
		{
		cout<<"x: "<<x<<" y: "<<y<<endl;
		}
		student operator-()
		{
			student ret;
			ret.x=-x;
			ret.y=-y;
			return ret;
		}

};
int main()
{
	student obj1(10,20),obj2;
	obj2=-obj1;		//obj2=obj1.operator-();
	obj1.get_data();
	obj2.get_data();
}
