//deep copy
//both object point to  different memory so if one modified other not get affected
#include<iostream>
#include<string.h>
using namespace std;
class deep 
{
	char *p;
	public : 
	deep(char *s)
	{
		p=new char[strlen(s)+1];
		//copy string s to p
		strcpy(p,s);
	}
	deep(deep &temp)
	{
		p=new char[strlen(temp.p)+1];
		strcpy(p,temp.p);
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
	deep s1("Data"),s2(s1);
	s1.get_string();
	s2.get_string();

	s1.modify();
	s1.get_string();
	s2.get_string();
}
