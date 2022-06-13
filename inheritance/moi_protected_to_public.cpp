//inheritance basics
//Mode of inheritance - protected 

#include<iostream>
using namespace std;
class base
{
	protected:
		int x;
	public:	
		void set_base()
		{
			cout<<"enter x"<<endl;
			cin>>x;
		}
		void get_bas()
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
			//cin>>x;		//another method to access x,because of inheritance
			set_base();		//another method to assign valid data to x
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
	//b1.x=200;		//not possible, because of x is protected
	b1.set_base();		//valid instr to assign valid data to x
	
	//d1.x=300;		//not possible, because of x is protected, even derived inherit as public
				//protected remain same as protected 	
				
	d1.set_base();		//another method to provide valide data to x
	
}
