//class
//by default member of a class is private.

#include<iostream>
using namespace std;
class student
{
	//data members
        int roll;
        char name[20];
	//member functions
	void set_data()
        {
                cout<<"enter name and roll"<<endl;
                cin>>name>>roll;
        }
public:	
        void get_data()
        {
		//access set data using get data
		set_data();
                cout<<"name: "<<name<<" roll: "<<roll<<endl;
        }
};
int main()
{
	student s;
	//set data is now private member function.it is not possible to access outside
	//access by using other members
	//s.set_data();
	s.get_data();	
}
