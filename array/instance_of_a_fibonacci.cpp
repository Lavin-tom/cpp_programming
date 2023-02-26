#include<iostream>
using namespace std;
int main()
{
    int n, sum =0;
    cout<<"enter n"<<endl;
    cin>>n;
    int f = 0, s=1;
    for (int i=0;i<=n-2;i++)
    {
        sum = s + f;
        cout<<sum<< " ";
        f = s;
        s = sum;
    }
}