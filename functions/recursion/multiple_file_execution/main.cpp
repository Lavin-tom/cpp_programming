//main.cpp
// binary search

#include <iostream>
#include "myheader.h"
using namespace std;
int main()
{
    int size, res;
    cout << "enter array size" << endl;
    cin >> size;
    int *arr = new int[size];
    setArray(arr, size);
    getArray(arr, size);
    sortArray(arr, size);
    getArray(arr, size);
    res = binarySearch(arr, size);
    if(res)
        cout<<res<<endl;
    else
        cout<<"Not found"<<endl;
    delete[] arr;
}