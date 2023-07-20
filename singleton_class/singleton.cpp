//singleton
//a class contain only one object is called singleton class
//used in vlc media player and windows task manager
//only one class is created 

#include<iostream>
using namespace std;
class singleton
{
	int x;
	//static function will access static data
	static singleton *single;	//pointer of type singleton
	singleton()			//constr
	{
		cout<<"constr"<<endl;
	}
	public:
	static singleton * create_object()	//static function
	{
		//only one time class is creating
		if(single==0)
			single=new singleton;		//dma
		return single;
	}
};
//defintion of static must be outside the class
singleton* singleton::single=0;		//static variable definiton
int main()
{
	singleton *ptr1,*ptr2;
	ptr1=singleton:: create_object();
	cout<<ptr1<<endl;

	ptr2=singleton::create_object();
	cout<<ptr2<<endl;
}
