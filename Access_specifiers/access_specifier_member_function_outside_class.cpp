#include<iostream>
using namespace std;
//class
class access
{
    private:        //access specifier
        int roll;   //data members
        string name;

    public: 
        //member functions declaration
        void setData();  
        void getData();
};
//member function defenisions
void access:: setData()
{
    cout<<"enter roll and name"<<endl;
    cin>>roll>>name;
}
void access::getData()
{
    cout<<"roll no: "<<roll<<endl;
    cout<<"name: "<<name<<endl;
}
int main()
{
    //object creation
    access as;
    as.setData();
    as.getData();
}