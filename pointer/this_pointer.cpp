//this pointer
#include<iostream>
using namespace std;
class student 
{
	int roll;
	char name[20];
	public:
	void set_data()
	{
		cout<<"set:"<<this<<endl;
		cout<<"enter the roll no and name"<<endl;
		cin>>this->roll>>this->name;
	}
	void get_data()
	{
		cout<<"get: "<<this<<endl;
		cout<<"roll: "<<this->roll<<" name: "<<this->name<<endl;
	}
};
int main()
{
	student s;
	cout<<"&s: "<<&s<<endl;
	s.set_data();
	s.get_data();
}
