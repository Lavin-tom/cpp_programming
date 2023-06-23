//factorial of a number

#include<iostream>
using namespace std;
void factorial(int num)
{
    int fact = 1;
    for(int i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    printf("%d",fact);
}
int main()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    factorial(num);
}