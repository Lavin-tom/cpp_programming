//friend_function

#include<iostream>
using namespace std;
class teacher;
class student
{
	int a,b;
	public: void set_data()
		{
			cout<<"enter a and b"<<endl;
			cin>>a>>b;
		}
		void get_data()
		{
			cout<<"a : "<<a<<" b: "<<b<<endl;
		}
	friend class teacher;
};
class teacher
{
	int x,y;
	public: void set_data()
		{
			cout<<"enter x and y"<<endl;
		       	cin>>x>>y;
		}
		void get_data(student s)
		{
			cout<<"a : "<<s.a<<" b: "<<s.b<<endl;
			//trying to access data from another class
			cout<<"x : "<<x<<" y: "<<y<<endl;
		}	
};
int main()
{
	student s;
	teacher t;
	s.set_data();
	s.get_data();
	t.set_data();
	t.get_data(s);
}
