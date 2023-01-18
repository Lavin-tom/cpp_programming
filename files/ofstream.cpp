//file concept - c++
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream fout("data");			//used to store the our data into a "data" file
						//fout is object - we can modify with our own 
	fout<<"testing"<<endl;
	fout<<"c++ file concept"<<endl;
	fout<<"update to a file"<<endl;

	fout.close();				//close the file using object and close function
}
