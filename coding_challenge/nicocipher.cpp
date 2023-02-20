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
                cout << "yes: " << (char)str[i] << " " << j << endl;
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

    displayArray(arr, keyLength);
}