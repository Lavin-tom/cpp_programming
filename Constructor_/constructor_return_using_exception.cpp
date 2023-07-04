//constructor return 
//using exception handling
#include <iostream>
using namespace std;
class A{
	int x;
	public:
	A(){
		x=10;
		throw (x);
		cout<<"constructor"<<endl;
	}
	~A(){
		cout<<"destructor"<<endl;
	}
	void get_data(){
		cout<<"x: "<<x<<endl;
	}
};
int main(){
	try {
		A obj;
		cout<<"object created"<<endl;
		obj.get_data();
	} catch (int a) {
		cout<<"object not created"<<endl;
		cout<<"constructor return "<<a<<endl;
	}
}
