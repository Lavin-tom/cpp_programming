//inheritance basics
//Mode of inheritance - private to private 

#include<iostream>
using namespace std;
class base
{
		int x;	
	public:	
		base()
		{
			cout<<"constr base"<<endl;
		}
		~base()
		{
			cout<<"destr base"<<endl;
		}
};

class derived: public base
{
	public: 	
		derived()
		{
			cout<<"constr derived"<<endl;
		}
		~derived()
		{
			cout<<"destr derived"<<endl;
		}

};
int main()
{
	//base b1;
	derived d1;

}
