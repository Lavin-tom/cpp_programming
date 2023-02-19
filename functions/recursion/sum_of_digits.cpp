#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
    int static sum = 0;
    if(n>0)
    {
        sum += n%10;
        n /= 10;
        sumOfDigits(n);
    }
    else
        return sum;
}
int main()
{
    int n, res;
    cout<<"enter number"<<endl;
    cin>>n;
    res = sumOfDigits(n);
    cout<<"sum of digits: "<<res<<endl;
}