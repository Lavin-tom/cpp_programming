//files
//reading from a file
//command line argument

#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
	//checking for providing filename along with a.out
	if(argc!=2)
	{
		cout<<"usage ./a.out filename"<<endl;
		return 0;
	}

	//fin is object of ofstream 
	ifstream fin;
	fin.open(argv[1]);

	//return one when file not found
	if(fin.fail())
	{
		cout<<"file not present"<<endl;
		return 0;
	}
	char ch;
	//reading char by char from file
	while((ch=fin.get())!=EOF)
	      cout<<ch;

	/*to print word by word 
	char s[20];	
	while(fin>>s)
	cout<<s<<endl; */
	 
	//to close the file
	fin.close();
}
