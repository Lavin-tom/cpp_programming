//files
//copy one file to another file

#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
	//checking for providing filename along with a.out
	if(argc!=3)
	{
		cout<<"usage ./a.out source_file dest_file"<<endl;
		return 0;
	}

	//fin is object of ofstream 
	ifstream fin(argv[1]);		//file opened in read mode

	//return one when file not found
	if(fin.fail())
	{
		cout<<"file not present"<<endl;
		return 0;
	}
	//file opened in write mode
	ofstream fout(argv[2]);
	char ch;
	while((ch=fin.get())!=EOF) //reading data from char by char from src file
		fout<<ch;
	 
	//to close the file
	fin.close();
	fout.close();
}
