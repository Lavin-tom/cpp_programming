//inheritance basics
//Mode of inheritance - MOI 

#include<iostream>
using namespace std;
class base
{
	public:
		int x;
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
	b1.x=200;		//possible, because of x is public
	b1.set_base();		//another way to assign valid data to x
	d1.x=300;		
	//d1.x and b1.x are different
	cout<<"x: "<<b1.x<<endl;
	cout<<"x: "<<d1.x<<endl;
	
}
