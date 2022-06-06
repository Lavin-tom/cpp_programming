//basics structure concept
//using access specifiers

#include<iostream>
using namespace std;
struct st
{
	private: int x;
		 char ch;
	public: void scan(){
			cin>>x>>ch;
		}
		void display(){
			cout<<x<<" "<<ch<<endl;
		}
};
int main()
{
	st s;
	cout<<"enter integer and character"<<endl;
	s.scan();
	s.display();
}
