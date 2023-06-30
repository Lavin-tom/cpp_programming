//basics structure concept
//using access specifiers

#include<iostream>
using namespace std;
struct abc
{
	private: 
		int x;
		char ch;
	public: 
		void scan()
		{
			cin>>x>>ch;
		}
		void display(){
			cout<<x<<" "<<ch<<endl;
		}
};
int main()
{
	abc s;
	cout<<"enter integer and character"<<endl;
	s.scan();
	s.display();
}
