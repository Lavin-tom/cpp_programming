#include<iostream>
#include "myheader.h"
using namespace std;

int binarySearch(int arr[], int size)
{
    int data, left = 0, right = size - 1, flag =0,middle;
    cout << "enter data to be search" << endl;
    cin >> data;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (arr[middle] < data)
            left = middle + 1;
        else if (arr[middle] > data)
            right = middle - 1;
        else if(arr[middle]==data){
            flag = 1;
            break;
        }
    }
    if(flag)
        return middle;
    else
        return 0;
}