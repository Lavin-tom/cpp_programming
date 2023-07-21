//inheritance basics
//Mode of inheritance - private to private 

#include<iostream>
using namespace std;
class base
{
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
//inherit private to private
class derived: private base
{
	public: 	
		int y;
		void set_derived()
		{
			cout<<"enter y"<<endl;
			cin>>y;
			//cin>>x;		//not possible to x,because not inherited
			set_base();		//method to assign valid data to x.
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
	b1.set_base();		//method to assign valid data to x,x is in public
	
	//d1.x=300;			//x is not inherited, so can't access in main	
				
	//d1.set_base();	//not possible, because inherited to private section
	d1.set_derived();
}
