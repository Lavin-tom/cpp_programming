//private access specifier

#include<iostream>
using namespace std;
//class
class access
{
    private:        //access specifier
        int roll;   //data members
        string name; 
        //member functions
        void setData()  
        {
            cout<<"enter roll and name"<<endl;
            cin>>roll>>name;
        }
        void getData()
        {
            cout<<"roll no: "<<roll<<endl;
            cout<<"name: "<<name<<endl;
        }
};
int main()
{
    //object creation
    access as;
    as.setData();       //both functions are in private
    as.getData();       //so we can't access the data members
    //if we want to access any of the private data member
    //atleast one member function should be in public
}