//factorial of a number

#include<iostream>
using namespace std;
int factorial(int num)
{
    static int fact = 1,i= 1;
    if(i<=num)
    {
        fact *= i;
        i++;
        factorial(num);
    }
    else
        return fact;
}
int main()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    cout<<"factorial of "<<num<<" is "<<factorial(num)<<endl;
}