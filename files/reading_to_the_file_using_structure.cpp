//files
//reading complete object in file using read() function
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class A
{
	public:
		int x;
		char s[20];
		float f;
};
int main()
{
	A obj;
	fstream fin("data",ios::in); 			//read mode
	fin.read((char *)&obj,sizeof(obj));		
	cout<<"x: "<<obj.x<<" s: "<<obj.s<<" f: "<<obj.f<<endl;
	fin.close();
}
