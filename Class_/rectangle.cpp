//class and object
#include<iostream>
using namespace std;
class rectangle
{
	float area,peri,length,breadth;
	public: void cal_area()
		{
			area=length*breadth;
		}
		void cal_peri()
		{
			peri=length+breadth;
		}
		void disp()
		{
			cout<<"Length:"<<length<<endl;
			cout<<"Breadth:"<<breadth<<endl;
			cout<<"Area:"<<area<<endl;
			cout<<"Perimeter:"<<peri<<endl;
		}
		void set_data()
		{
			cout<<"enter length and breadth"<<endl;
			cin>>length;
			cin>>breadth;
			area=peri=0;
		}
};
int main()
{
	rectangle robj;	//rectangle is an user defined datatype and robj is an object of rectangle class
	cout<<"size of robj:"<<sizeof(robj)<<endl;
	robj.set_data();
	robj.cal_area();
	robj.cal_peri();
	robj.disp();
}

