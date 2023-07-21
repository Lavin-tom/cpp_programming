//inheritance
//size of inheritance

#include<iostream>
using namespace std;
class base 
{
	//empty base class
};
class derived : public base 
{
	//empty derived class
};
int main()
{
	//size of class is not based on private or public, still it create memory for private data too 
	cout<<"size of : "<<sizeof(base)<<endl;				//1
	cout<<"size of : "<<sizeof(derived)<<endl;			//1
}
