//friend function
//multiple class
//multiple classes are friend to a function

#include<iostream>
using namespace std;

//forward declaration to avoid not declaration error
class teacher;
class student
{
	char name[20];
	int age;
	public: 
	void set_data()
	{
		cout<<"enter name and age of student"<<endl;
		cin>>name>>age;
	}
friend void office(student s,teacher t);
};
class teacher
{
	char name[20];
	int age;
	public:
	void set_data()
	{
		cout<<"enter name and age of teacher"<<endl;
		cin>>name>>age;
	}
friend void office (student s,teacher t);
};

//collecting objects from each class
//office is non member function
//to access teacher and student class, we use friend function
void office(student s,teacher t)
{
	cout<<"name of student: "<<s.name<<" age :"<<s.age<<endl;
	cout<<"name of teacher: "<<t.name<<" age :"<<t.age<<endl;
}
int main()
{
	student s;
	teacher t;
	s.set_data();
	t.set_data();
	office(s,t);
}
