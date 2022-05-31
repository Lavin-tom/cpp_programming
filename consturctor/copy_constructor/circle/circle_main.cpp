//circle_main.c

#include<iostream>
using namespace std;

#include"circle.h"
#include"circle.cpp"

int main()
{
	circle cobj1;
	cobj1.cal_area();
	cobj1.cal_peri();
	cobj1.display();

	circle cobj2=cobj1;	//invokes copy cons
	cobj2.display();
}
