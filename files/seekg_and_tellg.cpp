//files
//seekg and tellg

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fio("data",ios::in);
	cout<<fio.tellg()<<" ";		//we get first 0 index chara 
	cout<<(char)fio.get()<<endl;	//ascii is getting ,we need in character

	fio.seekg(8,ios::beg);
	cout<<fio.tellg()<<" "; 	//we get 8 index value from begining
	cout<<(char)fio.get()<<endl;

	fio.seekg(0,ios::end);		//end position 
	cout<<fio.tellg()<<" ";
	cout<<fio.get()<<endl;		//last chara is EOF -1 it is not printable so avoid char
	
	fio.clear();			//after reading -1 ,must use this function 

	fio.seekg(-5,ios::cur);
	cout<<fio.tellg()<<" ";
	cout<<(char)fio.get()<<endl;	
}
