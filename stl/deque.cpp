//stl- standard template library
//deque

#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> v1;	//it create five elements and intialized with zero
	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(60);
	v1.push_front(11);	//add at start

	//printting using iterator
	deque<int>::iterator it1;
	for(it1=v1.begin();it1!=v1.end();it1++)
		cout<<*it1<<" ";
	cout<<endl;

	v1.pop_front();		//dlte first element
	for(it1=v1.begin();it1!=v1.end();it1++)
		cout<<*it1<<" ";
	cout<<endl;
}
