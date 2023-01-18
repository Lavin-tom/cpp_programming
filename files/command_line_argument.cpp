//printing content of a file in console
//command line argument in c++ file
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc,char* argv[]){
	if(argc!=2){
		cout<<"usage: ./a.out filename"<<endl;
		return 0;
	}
	ifstream fin;
	fin.open(argv[1]);
	if(fin.fail()){
		cout<<"file is not present"<<endl;
		return 0;
	}
	char ch;
	while((ch=fin.get())!=-1)
		cout<<ch;
	cout<<endl;//read only one character
}
