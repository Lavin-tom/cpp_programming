//friend function
#include<iostream>
using namespace std;
class student
{
	//roll and name are private by default 
	//by using friend function we can access them
	int roll;
	char name[20];
	friend int main();//grantig permission to main as friend
};
int main()
{
	student s;
	cout<<"enter the rollno and name"<<endl;
	cin>>s.roll>>s.name;
	cout<<"roll: "<<s.roll<<" name: "<<s.name<<endl;
}
