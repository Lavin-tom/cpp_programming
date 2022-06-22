//type convertion 
//class to basic

#include<iostream>
using namespace std;
class Time
{
	int hr;
	int min;
	public:
	Time()
	{
		cout<<"enter hr and minute"<<endl;
		cin>>hr>>min;
	}
	//type convertion function 
	operator int ()
	{
		return hr*60+min;
	}
};
int main()
{
	Time t1;
	int n;
	//t1 is object of class Time and n is integer
	//type convertion function is needed
	n=t1;
	cout<<"total number of minute: "<<n<<endl;
}
