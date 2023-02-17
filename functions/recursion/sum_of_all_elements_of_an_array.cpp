// sum of all elements of an array

#include <iostream>
using namespace std;
void sumOfArray(int arr[], int size, int index)
{
    static int sum = 0;
    sum += arr[index];
    index++;
    if (size == index)
        cout << "sum of array: " << sum << endl;
    else
        sumOfArray(arr, size, index);
}
int main()
{
    int *arr = new int[5];
    cout << "enter array elements" << endl;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    sumOfArray(arr, 5, 0);
    delete [] arr;
}