//complex add app
#include<iostream>
using namespace std;
#include"complex.h"
#include"complex.cpp"

int main()
{
	Complex e1,e2,e3,e4;
	e1.SetData();
	e2.SetData();
	e3=e1.Add(e2);
	e4=e2.Sub(e3);

	cout<<"e1:";
	e1.Display();

	cout<<"e2:";
	e2.Display();

	cout<<"e3:";
	e3.Display();

	cout<<"e4:";
	e4.Display();
}
