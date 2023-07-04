#include<iostream>
using namespace std;
//class
class access
{
    private:        //access specifier
        int roll;   //data members
        string name;

    public: 
        //member functions
        void setData()  
        {
            cout<<"enter roll and name"<<endl;
            cin>>roll>>name;
        }
        void getData();     //declartion of function
};
//member function definition outside the class
void access:: getData()
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