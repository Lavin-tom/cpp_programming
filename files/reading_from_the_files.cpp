//files
//read mode
//reading from the file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fin("data",ios::in);
	int x;
	char s[20];
	float f;
	fin.read((char*)&x,sizeof(x));		//reading data from file
	fin.read(s,sizeof(s));
	fin.read((char*)&f,sizeof(f));
	cout<<"x: "<<x<<" s: "<<s<<" f: "<<f<<endl;	//printing on screen

	fin.close();
}
