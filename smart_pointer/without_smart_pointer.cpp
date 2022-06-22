//smart pointers
#include<iostream>
using namespace std;
class person
{
	int age;
	const char *name;
	public:
	person()
	{
	}
	person(const char *s,int a)
	{
		age=a;
		name=s;
	}
	void get_person()
	{
		cout<<"age : "<<age<<endl;
		cout<<"name: "<<name<<endl;
	}
};
int main()
{
	//all the pointers by default, pointing to garbage collection 
	person *p1;
	p1=new person("abcd",12);	//dma to create memory
	p1->get_person();

	person *p2;
	p2=new person("efgh",34);
	p2->get_person();

	person *p3;
	p3=new person("ijkl",56);
	p3->get_person();

	//must and should need to delete the memory
	delete p1;
	delete p2;
	delete p3;
	//if 100 ponters then 100 times explicitly needs to delete
	//complexity will increase
}
