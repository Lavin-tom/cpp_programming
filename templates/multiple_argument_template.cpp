//class template
//sorting and reverse

#include <iostream>
using namespace std;
template<class type1,class type2>
class A{
	type1 x;
	type2 ch;
	public:
	A();
	A(type1,type2);
	void get_data();
};
template<class type1,class type2>
A<type1,type2>::A(){
	cout<<"constructor"<<endl;
}
template<class type1,class type2>
A<type1,type2>::A(type1 a, type2 b){
	x=a;
	ch=b;
}
template<class type1,class type2>
void A<type1,type2>::get_data(){
cout<<x<<" "<<ch<<endl;
}
int main(){

	A<int,char> obj(10,'a');
	A<float,char>obj2(21.4,'z');
	obj.get_data();
	obj2.get_data();

}
