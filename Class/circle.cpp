//class and object
#include<iostream>
using namespace std;
class circle
{
	float area,circ,pi=3.14;
	public: void cal_area(int radius)
	{
		area=pi*(radius*radius);
	}
	void cal_circ(int radius)
	{
		circ=2*pi*radius;
	}
	void disp(int radius)
	{
		cout<<"Radius:"<<radius<<endl;
		cout<<"Area:"<<area<<endl;
		cout<<"circumference:"<<circ<<endl;
	}
};
int main()
{
	int radius;
	cout<<"Enter the radius of the circle"<<endl;
	cin>>radius;
	circle cobj;
	cobj.cal_area(radius);
	cobj.cal_circ(radius);
	cobj.disp(radius);
}
