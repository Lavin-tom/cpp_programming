#include <iostream>
using namespace std;
void setArray(int arr[][5])
{
    cout << "enter array element" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void displayArray(int arr[][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[5][5];
    setArray(arr);
    displayArray(arr);
}