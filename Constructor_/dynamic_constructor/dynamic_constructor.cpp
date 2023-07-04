//dynamic constructor 
//call at runtime 

#include<iostream>
using namespace std;
class A
{
	int x,y;
	public: A()
		{
			cout<<"deafult constr"<<endl;
			x=0,y=0;
		}
		A(int a,int b)
		{
			cout<<"parameterized constr"<<endl;
			x=a,y=b;
		}
		A(A& t)
		{
			cout<<"copy constr"<<endl;
			x=t.x,y=t.y;
		}
};
int main()
{
	A *ptr1;
	A a2;
	ptr1=new A;		//call default constr
	ptr1=new A(10,20);	//parametrized 
	ptr1=new A(a2);		//copy constr
}
