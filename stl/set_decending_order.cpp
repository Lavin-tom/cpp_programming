//stl- standard template library
//set
//no duplicate elements allowed
//by default it arrange in accending order
//providing greater we get in decending order 

#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int,greater<int>> v1;	//it create five elements and intialized with zero
	v1.insert(10);	//add at start
	v1.insert(10);	//not show duplicate elements
	v1.insert(10);	//by default it print in accesding order
	v1.insert(10);
	v1.insert(23);
	v1.insert(17);
	v1.insert(54);
	v1.insert(9);

	//printting using iterator
	set<int>::iterator it1;
	for(it1=v1.begin();it1!=v1.end();it1++)
		cout<<*it1<<" ";
	cout<<endl;
}
