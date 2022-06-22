//type convertion 
//basic to class

#include<iostream>
using namespace std;
class Time
{
	int hr;
	int min;
	public:
	Time()
	{
		hr=0;
		min=0;
	}
	Time(int n)
	{
		hr=n/60;
		min=n%60;
	}
	void get_time()
	{
		cout<<hr<<" hours "<<min<<" min"<<endl;
	}
};
int main()
{
	Time t1;
	t1.get_time();
	int n;
	cout<<"enter number of minutes"<<endl;
	cin>>n;
	//t1 is object of class Time and n is integer
	//proper constru to get
	t1=n;
	t1.get_time();
}
