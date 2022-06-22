//files
//write function

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fout("data",ios::out);
	int x=10;
	char s[20]="hello";
	float f=23.5;
	fout.write((char*)&x,sizeof(x));
	fout.write(s,sizeof(s));
	fout.write((char*)&f,sizeof(f));

	fout.close();
}
