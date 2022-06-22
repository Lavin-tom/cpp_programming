//smart pointers
//object contain pointer to dynamically allocated memory
//object working like pointer
//object will hold the dynamic memory
//object will get dereference
//adv - code complexity can reduce
//	avoiding garbage collection
//	avoid memory leak

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
class smart_pointer
{
	person *ptr;
	public:
		smart_pointer()
		{
		}
		smart_pointer(person *p)
		{
			ptr=p;
		}
		//-> operator overloading 
		person* operator->()
		{
			return ptr;
		}
		~smart_pointer()
		{
			delete ptr;
		}

};
int main()
{
	//object holding valid memory , using this avoid garbage collection of pointer
	smart_pointer sp1(new person("abc",12));
	//sp1 is object - so use dot opertor to access
	//get_person is member function of person class, not a member of smart_pointer
	//operator overloading
	sp1->get_person();	//sp1.operator->()

	smart_pointer sp2(new person("def",34));
	sp2->get_person();	//sp2.operator->()
	
	smart_pointer sp3(new person("ghi",54));
	sp3->get_person();	//sp3.operator->()

}
