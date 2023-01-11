//inheritance
//size of inheritance

#include<iostream>
using namespace std;
class base
{
	//int x,y;
};
class derived : public base
{
	//int m,n;

};
int main()
{
	//size of class is not based on private or public, still it create memory for private data too 
	cout<<"size of : "<<sizeof(base)<<endl;				//8
	cout<<"size of : "<<sizeof(derived)<<endl;			//16
}
