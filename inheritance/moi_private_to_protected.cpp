//inheritance basics
//Mode of inheritance - private to protected 

#include<iostream>
using namespace std;
class base
{
	//x is private
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
//inherit private to protected
class derived: protected base
{
	public: 	
		int y;
		void set_derived()
		{
			cout<<"enter y"<<endl;
			cin>>y;
			//cin>>x;		//not possible to x,because x is private
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
	//b1.x=200;		//not possible, because of x is private
	b1.set_base();		//method to assign valid data to x, using member function we can access
	
	//d1.x=300;		//so not possible to access x,because not inherited	
				
	//d1.set_base();	//not possible, because inherited to protected section
	d1.set_derived();
}
