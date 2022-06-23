//stl- standard template library
//vector

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1(5,22);	//it create five elements and intialized with zero

	vector<int>:: iterator it1;
	for(it1=v1.begin();it1!=v1.end();it1++)
		cout<<*it1<<" ";
	cout<<endl;

	v1.insert(v1.begin(),33);  	//adding 33 at begin
	v1.insert(v1.begin()+3,44);	//adding 44 to the 3rd position from the begin
	v1.insert(v1.end()-2,11);	//adding 11 to the 2nd positon from the end position

	for(it1=v1.begin();it1!=v1.end();it1++)
		cout<<*it1<<" ";
	cout<<endl;

	//to print it in reverse order
	vector<int>:: reverse_iterator it2;
	for(it2=v1.rbegin();it2!=v1.rend();it2++)
		cout<<*it2<<" ";
	cout<<endl;

	//to delete the first element
	v1.erase(v1.begin());	//erase first element
	for(it1=v1.begin();it1!=v1.end();it1++)
		cout<<*it1<<" ";
	cout<<endl;

	v1.erase(v1.end()-1); //erase from last	
	for(it1=v1.begin();it1!=v1.end();it1++)
		cout<<*it1<<" ";
	cout<<endl;

	//v1.clear();	//to clear all elements 
}
