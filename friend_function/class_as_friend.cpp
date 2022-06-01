//class as friend
#include<iostream>
using namespace std;

class second;
class first
{
	int data;
	public : first()
		 {
			 cout<<"enter the data"<<endl;
			 cin>>data;
		 }
		 ~first()
		 {
			 cout<<"destructor"<<endl;
		 }
		 void display()
		 {
			 cout<<"Data:"<<data<<endl;
		 }
		 //making below class as a friend
		 friend class second;
};

class second
{
	int data2;
	public : second()
		 {
			 cout<<"first constuctor"<<endl;
		 }
		 ~second()
		 {
			 cout<<"first destructor"<<endl;
		 }
		 void compliment(first obj1)
		 {
			 data2=~obj1.data;
		 }
		 void display()
		 {
			 cout<<"dat2:"<<data2<<endl;
		 }
};

int main()
{
	first obj1;
	second obj2;
	obj2.compliment(obj1);
	obj1.display();
	obj2.display();
}
