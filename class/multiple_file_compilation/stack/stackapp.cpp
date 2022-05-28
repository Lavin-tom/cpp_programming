#include<iostream>
#include<stdlib.h>
using namespace std;

#include"stack.h"
#include"stack.cpp"

int main()
{
	stack obj;
	obj.menu();
	obj.push();
	obj.pop();
	obj.peek();
	obj.disp();
}
