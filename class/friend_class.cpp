//friend class
#include<iostream>
using namespace std;
class A;
class B
{
	public:
		void display(A obj_a);
};

class A
{
	int a=10;
	char b='C';
	public:
		friend void B::display(A);
};
void B::display(A obj_a)
{
	cout<<"a: "<<obj_a.a<<" "<<"b: "<<obj_a.b<<endl;
}
int main()
{
	A obj_a;
	B obj_b;
	obj_b.display(obj_a);
}
