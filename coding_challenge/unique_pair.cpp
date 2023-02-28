//unique pairs of no that divisible by a number
//not yet completed

#include<iostream>
using namespace std;
void setArray(int arr[],int size)
{
    cout<<"enter array elements"<<endl;
    for(int i=0;i<size;i++)
        cin>>arr[i];
}
void uniquePair(int arr[], int a, int b)
{
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            if((arr[i]+arr[j])%a==0)
            cout<<arr[i]<<arr[j]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int b,a;
    cout<<"enter array size"<<endl;
    cin>>b;
    int *arr  = new int[b];
    setArray(arr,b);
    cout<<"enter number"<<endl;
    cin>>a;
    uniquePair(arr,a,b);
    delete [] arr;
}