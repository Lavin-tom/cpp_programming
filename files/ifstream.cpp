//files in c++
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char s[20];
	ifstream fin("data");			//read mode
	//fin>>s;				//read one word from the file
	fin.getline(s,20);			//read one line from the file
	cout<<s<<endl;
	fin.close();
}
