//inheritance basics
//Mode of inheritance - private 

#include<iostream>
using namespace std;
class base
{
	//now x is private
		int x;
	public:	
		void set_base()
		{
			cout<<"enter x"<<endl;
			cin>>x;
		}
		void get_base()
		{
			cout<<"x: "<<x<<endl;
		}
};
class derived: public base
{
	public: 	
		int y;
		void set_derived()
		{
			cout<<"enter y"<<endl;
			cin>>y;
			//cin>>x;		//not possible to x,because x is not inherited
			set_base();		//method to assign valid data to x, because set_base is member function.
		}
		void get_derived()
		{
			cout<<"y: "<<y<<endl;
		}

};
int main()
{
	base b1;
	derived d1;
	cout<<"size of base1 :"<<sizeof(base)<<endl;
	cout<<"size of derived :"<<sizeof(derived)<<endl;
	//b1.x=200;			//not possible, because of x is private
	b1.set_base();		//valid instr to assign valid data to x ,member function can access private
	
	//d1.x=300;			//x is not inherit,because x is private	
				
	//d1.set_base();	//possible , set_base is public
	d1.set_derived();
}
