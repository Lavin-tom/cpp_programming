//friend function
//friend class
//give permission not for entire class,only for particular functions

#include<iostream>
using namespace std;
//forward declaration for avoid not declaration error
class first;
class second
{
	int x,y;
	public: 
	//to avoid error every defintions are placed after the declarations 
	void set_data();
	void get_data1(first);
	void get_data2(first);
};
class first
{
        int a,b;
        public:
        void set_data()
        {
                cout<<"enter a and b"<<endl;
                cin>>a>>b;
        }
        //give permission to get_data1 function only
        //function declaration
        friend void second::get_data1(first);
};

//declarations of class second
void second::set_data()
        {
                cout<<"enter x and y"<<endl;
                cin>>x>>y;
        }
        void second :: get_data1(first obj)
        {
                cout<<"we can access class first data from class second"<<endl;
                cout<<"a: "<<obj.a<<" b: "<<obj.b<<endl;
        }

        //get_data2 not have permission to acess data from class first
        //so it leads to error
        void second ::get_data2(first obj)
        {
                //cout<<"we can access class first data from class second"<<endl;
                //cout<<"a: "<<obj.a<<" b: "<<obj.b<<endl;
        }
int main()
{
	first obj1;
	second obj2;
	obj1.set_data();
	obj2.set_data();
	obj2.get_data1(obj1);
}
