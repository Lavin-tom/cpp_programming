#include<iostream>
#include "myheader.h"
using namespace std;

void getArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}