//duplicate element\\

#include<iostream>
using namespace std;
void setArray(int arr[], int size)
{
    cout<<"enter array elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void duplicateArray(int arr[], int size)
{
    cout<<"duplicates elements: ";
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
            }
        }
    }
}
int main()
{
    int size;
    cout<<"enter array size"<<endl;
    cin>>size;
    int *arr = new int [size];
    
    setArray(arr,size);
    duplicateArray(arr,size);

}