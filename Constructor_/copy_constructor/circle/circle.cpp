//circle.cpp
void circle :: set_data()
{
	cout<<"In set data:"<<endl;
	cout<<"enter the rad:"<<endl;
	cin>>rad;
	area=peri=0;
}

void circle :: display()
{
	cout<<"rad: "<<rad<<endl;
	cout<<"area: "<<area<<endl;
	cout<<"peri: "<<peri<<endl;
}

void circle :: cal_area()
{
	area=3.14*rad*rad;
}

void circle :: cal_peri()
{
	peri=2*3.14*rad;
}

circle :: circle(circle &cobj1)
{
	cout<<"in copy constructor: "<<endl;
	rad=cobj1.rad;
	area=cobj1.area;
	peri=cobj1.peri;
}
