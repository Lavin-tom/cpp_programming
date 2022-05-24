//inline function
//copy the function definition to the main 

#include<iostream>
using namespace std;
void print(string);
int main()
{
	string s1;
	cout<<"enter the string"<<endl;
	cin>>s1;
	print(s1);
}
inline void print(string s1)
{
	cout<<s1<<endl;
}
