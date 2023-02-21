// longest sub array
// not completed

#include <iostream>
#include <string>
using namespace std;
int *arr;
int strLength(string str)
{
    int l = 0;
    while (str[l])
        l++;
    return l;
}
void keyDecode(string str, int strLen)
{
    arr = new int[strLen];
    int count = 1;
    for (char j = 97; j <= 122; j++)
    {
        for (int i = 0; i < strLen; i++)
        {
            if (j == str[i])
            {
                // cout << "yes: " << (char)str[i] << " " << j << endl;
                arr[i] = count;
                count++;
                break;
            }
        }
    }
}
void displayArray(int arr[], int keyLength)
{
    for (int i = 0; i < keyLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void display2DArray(int keyLength, int *word2D[])
{
    for (int i = 0; i < keyLength; i++)
    {
        for (int j = 0; j < keyLength; j++)
        {
            cout << word2D[i][j] << " ";
        }
        cout << endl;
    }
}
void decodeMsg(string word, int wordLength, string key, int keyLength, int arr[])
{
    // word2D = new int *[keyLength];
    int row = wordLength % keyLength;
    cout << "row: " << row << endl;
    if (row > 0)
        row += 2;
    int word2D[row][keyLength];

    // adding zero to every elment
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < keyLength; j++)
        {
            word2D[i][j] = 0;
        }
    }
    // adding first raw element - keys
    for (int j = 0; j < keyLength; j++)
    {
        word2D[0][j] = arr[j];
    }

    int m = 0;
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < keyLength; j++)
        {
            word2D[i][j] = (int)word[m];
            m++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (word2D[0][i] < word2D[0][j])
            {
                for (int k = 0; k < 3; k++)
                {
                    int temp = word2D[k][i];
                    word2D[k][i] = word2D[k][j];
                    word2D[k][j] = temp;
                }
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < keyLength; j++)
        {
            cout <<word2D[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int keyLength = 0, wordLength = 0;
    string word = " ", key = " ";
    cout << "enter string and key" << endl;
    cin >> word >> key;

    wordLength = strLength(word);
    cout << "string len: " << wordLength << endl;
    keyLength = strLength(key);
    cout << "key len: " << keyLength << endl;
    keyDecode(key, keyLength);

    // displayArray(arr, keyLength);

    decodeMsg(word, wordLength, key, keyLength, arr);
}