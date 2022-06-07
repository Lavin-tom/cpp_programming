//class
//by default member of a class is private.

#include<iostream>
using namespace std;
/*struct student 
{
	int roll;
	char name[20];
	void set_data()
	{
		cout<<"enter name and roll"<<endl;
		cin>>name>>roll;
	}
	void get_data()
	{
		cout<<"name: "<<name<<" roll: "<<roll<<endl;
	}
};*/
class student
{
	//data members
        int roll;
        char name[20];
public:
	//member functions
	void set_data()
        {
                cout<<"enter name and roll"<<endl;
                cin>>name>>roll;
        }
        void get_data()
        {
                cout<<"name: "<<name<<" roll: "<<roll<<endl;
        }
};
int main()
{
	student s;
	s.set_data();
	s.get_data();	
}
