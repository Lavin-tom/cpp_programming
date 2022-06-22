//files
//writing complete object in file using write() function
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
		A()
		{
			x=10;
			strcpy(s,"abc");
			f=12.4;
		}

};
int main()
{
	A obj;
	fstream fout("data",ios::out);
	fout.write((char *)&obj,sizeof(obj));
	fout.close();
}
