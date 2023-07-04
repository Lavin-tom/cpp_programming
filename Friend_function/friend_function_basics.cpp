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
        //declaring getData() as a friend function
        friend void getData(access as);
};
//non member function
//definition of getData() outside the class
void getData(access obj)
{
    cout<<"roll no: "<<obj.roll<<endl;
    cout<<"name: "<<obj.name<<endl;
}
int main()
{
    //object creation
    access as;
    as.setData();
    getData(as);    //calling the friend function
}