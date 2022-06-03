//access name space without namespace std
//directive method

#include<iostream>
//instead of writing std in all cout and cin we add namespace std
using namespace std;
int main()
{
	int n;
	//std:: cout<<"enter n"<<std::endl;
	//std:: cin>>n;
	cout<<"enter n"<<std::endl;
	cin>>n;
	//std:: cout<<"n: "<<n<<std::endl;
	cout<<"n : "<<n<<endl;
}
