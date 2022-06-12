//insertion and extraction operator overloading

#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[20];
	//give permission for access private data
	friend istream& operator >>(istream &in,student &s);
	friend ostream& operator <<(ostream &out,student &s);
};
//for cin ,istream class
//call copy constr,istream constructor is in protected section can't access
//to avoid this problem we use referance
//call by referance used 
istream& operator >>(istream &in,student &s)
{
	cout<<"operator >> overloading"<<endl;
	in>>s.rollno>>s.name;
	return in;
}
ostream& operator <<(ostream &out,student &s)
{
	out<<"operator << overloading"<<endl;
	out<<"rollno: "<<s.rollno<<" name: "<<s.name<<endl;
	return out;
}
int main()
{
	student s1,s2;
	cout<<"enter roll no and name"<<endl;
	cin>>s1>>s2;	//operator>>(cin,s1);
	cout<<s1<<s2;	//operator<<(cout,s1);
}
