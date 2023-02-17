// binary search

#include <iostream>
using namespace std;
void setArray(int arr[], int size)
{
    cout << "enter array element" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}
void getArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void sortArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
}
void binarySearch(int arr[], int size)
{
    int data, left = 0, right = size - 1;
    cout << "enter data to be search" << endl;
    cin >> data;
    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (arr[middle] < data)
            left = middle + 1;
        else if (arr[middle] > data)
            right = middle - 1;
        else if(arr[middle]==data){
            cout << middle << endl;
            break;
        }
    }
    cout<<"Not found"<<endl;
}
int main()
{
    int size;
    cout << "enter array size" << endl;
    cin >> size;
    int *arr = new int[size];
    setArray(arr, size);
    getArray(arr, size);
    sortArray(arr, size);
    getArray(arr, size);
    binarySearch(arr, size);
    delete[] arr;
}