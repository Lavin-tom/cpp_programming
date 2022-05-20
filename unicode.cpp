//unicode.cpp

#include<iostream>
#include<clocale>
using namespace std;
int main()
{
	setlocale(LC_CTYPE," ");
	wchar_t ch;
	for(ch=3330;ch<=3439;ch++)
		wcout<<ch<<" ";
	cout<<"\n";
}
