//wap to find the biggest of three nos using templates
#include <iostream>
using namespace std;
template<class type>
void big(type a,type b,type c){
	if( a > b ){
		if( a > c ){
			cout<<a<<" is biggest"<<endl;
		}
		else {
			cout<<c<<" is biggest"<<endl;
		}
	}
	else if(b > c ){
		cout<<b<<" is biggest"<<endl;
	}
	else {
		cout<<c<<" is biggest"<<endl;
	}
}
int main(){
	big(12,5,43);
	big(23.2,22.5,21.8);
	big('h','n','o');
}
