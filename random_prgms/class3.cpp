//class
//by default member of a class is private.

#include<iostream>
using namespace std;
class student
{
	//data members
        int roll;
        char name[20];
public:	
	//member function declaration
        void set_data();
	void get_data();
};
int main()
{
	student s1,s2;
	s1.set_data();
	s2.set_data();
	s1.get_data();
	s2.get_data();	
}

//class student : member function definition
void student :: set_data()
        {
                cout<<"enter roll and name"<<endl;
                cin>>roll>>name;
        }
void student :: get_data()
        {
                cout<<"roll: "<<roll<<" name: "<<name<<endl;
        }
