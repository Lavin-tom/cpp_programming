//square
//area and perimeter
#include<iostream>
using namespace std;

class square
{
	float area,peri,side;
	public : square()
		 {
			 cout<<"enter the side:"<<endl;
			 cin>>side;
			 area=peri=0;
		 }
		 void cal_area()
		 {
			 area=side*side;
		 }
		 void cal_peri()
		 {
			 peri=4*side;
		 }
		 //now print is friend of class square
		 friend void print(square);
};

//normal function
void print(square s)
{
	cout<<"side: "<<s.side<<endl;
	cout<<"area: "<<s.area<<endl;
	cout<<"peri: "<<s.peri<<endl;
}

int main()
{
	square sobj;
	sobj.cal_area();
	sobj.cal_peri();
	print(sobj);
}

