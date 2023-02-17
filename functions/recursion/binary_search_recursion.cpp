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
void binarySearch(int arr[], int size, int data, int left, int right)
{
    int middle = (left + right) / 2;
    if (left > right)
    {
        cout << "Not found" << endl;
        exit(0);
    }
    if (arr[middle] == data)
        cout << middle << endl;
    else if (arr[middle] < data)
        binarySearch(arr, size, data, middle + 1, right);
    else if (arr[middle] > data)
        binarySearch(arr, size, data, left, middle - 1);

}
int main()
{
    int size, data;
    cout << "enter array size" << endl;
    cin >> size;
    int *arr = new int[size];
    setArray(arr, size);
    getArray(arr, size);
    sortArray(arr, size);
    getArray(arr, size);
    cout << "enter data to be search" << endl;
    cin >> data;
    binarySearch(arr, size, data, 0, size - 1);
    delete[] arr;
}