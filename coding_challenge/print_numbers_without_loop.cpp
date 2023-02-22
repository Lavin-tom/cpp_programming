//print numbers without loops
#include<iostream>
using namespace std;
void printWithoutLoops(int i, int j)
{
    cout<<i<<" ";
    i++;
    if(i<=j)
        printWithoutLoops(i, j);
}
int main()
{
    int i,j;
    cout<<"enter range"<<endl;
    cin>>i>>j;
    printWithoutLoops(i,j);
    cout<<endl;
}