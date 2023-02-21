//sorting of 2d array based on first raw values

#include <iostream>
using namespace std;
void setArray(int arr[][3])
{
    cout << "enter array elements" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void getArray(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void sortArray(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[0][i] < arr[0][j])
            {
                for (int k = 0; k < 3; k++)
                {
                    int temp = arr[k][i];
                    arr[k][i] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }
}
int main()
{
    int arr[3][3];
    setArray(arr);
    getArray(arr);
    sortArray(arr);
    getArray(arr);
}