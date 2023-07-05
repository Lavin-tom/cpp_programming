//copy constructor
//member variable initialization 

#include<iostream>
using namespace std;
class A
{
	int x,y;
	public: A();
		A(int,int);
		A(A&);		
		void get_data();
};
		A::A():x(10),y(20)
                {
                        cout<<"default constructor"<<endl;
                }
		A::A(int a,int b):x(a),y(b)
                {
                        cout<<"parametrized constructor"<<endl;
                }
		A::A(A& temp)
		{
			cout<<"copy constr"<<endl;
			x=temp.x;
			y=temp.y;	
		}
		void A:: get_data()
                {
                        cout<<x<<" "<<y<<endl;
                }
int main()
{
	A obj1;			//default constr	
	A obj2(125,288);	//parametrized constr
	A obj3(obj2);		//copy constr	
	A obj4=obj1;		//copy constr
	A obj5;			//copy constr
	obj5=obj4;		//assigning the data
	obj1.get_data();
	obj2.get_data();
	obj3.get_data();
	obj4.get_data();
	obj5.get_data();
}
