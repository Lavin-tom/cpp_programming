//colour code in cpp
//for more man_console_codes

#include<iostream>
using namespace std;
//\033 is escape sequence m for stop
#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"
int main()
{
	cout<<RED<<"Hello world"<<endl;
	cout<<GREEN<<"Colour"<<endl;
	cout<<RED<<"colour"<<endl;
	cout<<RESET;
}
