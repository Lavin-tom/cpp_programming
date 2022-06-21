//files
//reading from a file

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//fout is object of ofstream 
	ifstream fin("data");

	char s[20];

	//read one word from file
	//fin>>s;
	
	//to read one line from the file
	fin.getline(s,20);
	cout<<s<<endl;

	//to close the file
	fin.close();
}
