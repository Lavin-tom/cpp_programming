//scope operator
#include<iostream>
using namespace std;
int data=100;
int main()
{
   int data=15;
   cout<<data<<endl;
   cout<<::data<<endl;
   {
	   int data=25;
	   cout<<data<<endl;	//enl for newline
	   cout<<::data<<endl;	//for get the global variable
   }
}
