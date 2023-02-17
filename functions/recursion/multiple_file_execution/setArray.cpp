#include<iostream>
#include "myheader.h"
using namespace std;

void setArray(int arr[], int size)
{
    cout << "enter array element" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}