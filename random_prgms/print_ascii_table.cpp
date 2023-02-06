//ascii table

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n"<<endl;
	cin>>n;

	for(int i=0;i<n;i++)
		cout<<char(i)<<":"<<i<<"\t";
}
