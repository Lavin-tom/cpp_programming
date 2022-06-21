//files
//open and close a file

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//fout is object of ofstream 
	ofstream fout("data");

	char s[20];
	cout<<"enter string"<<endl;
	cin>>s;
	//store our string into data file 
	fout<<s<<endl;

	//to close the file
	fout.close();
}
