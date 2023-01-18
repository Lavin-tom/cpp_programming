//copy one fil into another
#include <iostream>
#include <fstream>
using namespace std ;
int main(int argc,char *argv[]){

	if(argc!=3){
		cout<<"usage: ./a.out source_file_name destination_file_name"<<endl;
		return 0;
	}
	ifstream fin;				//open file for copy
	fin.open(argv[1]);
	if(fin.fail()){				//check for file present or not
		cout<<"file not present"<<endl;
		return 0;
	}
	ofstream fout(argv[2]);
	char ch;
	while((ch=fin.get())!=-1)
	fout<<ch;

	fin.close();				//source file close
	fout.close();				//destination file close

}
