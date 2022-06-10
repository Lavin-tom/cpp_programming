//operator overloading
//subscript operator

#include<iostream>
using namespace std;
class Array
{
	int a[5];
	public:
		//if we return reference , automatically get the rereferenced value 
		int& operator[](int index)
		{
			cout<<"subscript operator overload"<<endl;
			return a[index];
		}
	
};
int main()
{
	Array obj1;
	cout<<"enter array elements"<<endl;
	for(int i=0;i<5;i++)
		cin>>obj1[i];

	for(int i=0;i<5;i++)
		cout<<obj1[i]<<endl;	
}
