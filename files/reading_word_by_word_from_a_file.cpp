//printing word by word from a file
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[]){
 if(argc!=2){
		cout<<"usage : ./a.out filename"<<endl;
		return 0;
	}
	ifstream fin;
	fin.open(argv[1]);				//open file in read mode
	if(fin.fail()){					//it return true, if file is not present
		cout<<"file not availabale"<<endl;
	}
	char s[20];
	while(fin>>s)
		cout<<s<<endl;;
			cout<<endl;

	fin.close();
}
