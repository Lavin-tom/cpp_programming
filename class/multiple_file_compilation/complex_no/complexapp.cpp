#include<iostream>
using namespace std;

#include"complex.h"
#include"complex.cpp"

int main()
{
	Complex e1,e2;
	e1.setdata();
	e2.setdata();
	cout<<"e1:";
	e1.display();
	cout<<"e2:";
	e2.display();

}
