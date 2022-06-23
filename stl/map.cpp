//stl- standard template library
//map
//no duplicate elements allowed
//by default it arrange in accending order

#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<const char*, const char*> v1;
	v1.insert(pair<const char*,const char*>("Name","abc"));
	v1.insert(pair<const char*,const char*>("Name","abc"));
	v1.insert(pair<const char*,const char*>("city","banglore"));
	v1.insert(pair<const char*,const char*>("age","23"));

	//printting using iterator
	map<const char*,const char*>::iterator it1;
	for(it1=v1.begin();it1!=v1.end();it1++)
		cout<<it1->first<<" "<<it1->second<<endl;
}
