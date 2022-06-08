//shallow copy
//both object sharing same memory so if one modified other also get affected
#include<iostream>
#include<string.h>
using namespace std;
class shallow 
{
	char *p;
	public : 
	shallow(char *s)
	{
		p=new char[strlen(s)+1];
		//copy string s to p
		strcpy(p,s);
	}
	void get_string()
	{
		cout<<"string : "<<p<<endl;
	}
	void modify()
	{
	p[0]='S';
	}
};
int main()
{
	//parameterized constr
	shallow s1("Data"),s2(s1);
	s1.get_string();
	s2.get_string();

	s1.modify();
	s1.get_string();
	s2.get_string();
}
