//stl- standard template library
//vector

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1;
	vector<char> v2;
	cout<<v1.size()<<endl; 	//it gives no of elements 
	v1.push_back(20);	//add elements at end
	v1.push_back(30);
	v1.push_back(40);

	v2.push_back('A');
	v2.push_back('B');
	v2.push_back('C');

	//with index printing the data
	for(int i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";

	cout<<endl;

	for(int i=0;i<v2.size();i++)
		cout<<v2[i]<<" ";
	cout<<endl;

	//printing using iterator
	vector<int>::iterator it1;
	for(it1=v1.begin();it1!=v1.end();it1++)  //v1.begin gives starting addr 
		//dereferencing  
		cout<<*it1<<" ";		//v1.end gives last addr

}
