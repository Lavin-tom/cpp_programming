//const member function
#include<iostream>
using namespace std;
class student 
{
	mutable int mark1;
	int mark2;
	public: 
	void set_data()
	{
		cout<<"enter the marks"<<endl;
		cin>>mark1>>mark2;
	}
	void get_data()const
	{
		//not possible to modify the value becaue it is const
		//mark1 are mutable because of this, we can modify
		mark1=111;
		//mark2=222;
		cout<<"mark1: "<<mark1<<" mark2: "<<mark2<<endl;
	}
};
int main()
{
	student s;
	s.set_data();
	s.get_data();
}
