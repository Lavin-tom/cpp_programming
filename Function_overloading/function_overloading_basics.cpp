//function overloading
//same function name different parameter list
#include<iostream>
using namespace std;
void print(int a)
{
    cout<<a<<endl;
}
void print(double a)
{
    cout<<a<<endl;
}
void print(char a)
{
    cout<<a<<endl;
}
void print(string a)
{
    cout<<a<<endl;
}
int main()
{
    print(10);
    print(12.34);
    print('?');
    print("testing");
}