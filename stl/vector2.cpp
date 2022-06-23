//stl- standard template library
//vector

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1(5);	//it create five elements and intialized with zero
	vector<int> v2(5,22);	//it create five elements and intialized with 22
	vector<int> v3(v2);	//it create v3 and initialized with v2 data
	
	//printting using iterator
	vector<int>::iterator it1;
	for(it1=v1.begin();it1!=v1.end();it1++)
		cout<<*it1<<" ";
	cout<<endl;

	for(it1=v2.begin();it1!=v2.end();it1++)
		cout<<*it1<<" ";
	cout<<endl;

	for(it1=v3.begin();it1!=v3.end();it1++)
		cout<<*it1<<" ";
	cout<<endl;
}
