// reverse a string
// recursion

#include <iostream>
using namespace std;
char *reverseString(char word[], int length)
{
    static int i = 0, j = length - 1;
    // swapping of letters
    if (word[i] != word[j])
    {
        word[i] = word[i] + word[j];
        word[j] = word[i] - word[j];
        word[i] = word[i] - word[j];
    }
    i += 1;
    j -= 1;
    if (i <= length / 2)
        reverseString(word, length);
    else    
        return word;
}
int main()
{
    int length = 0;
    char *word = new char[10];
    cout << "enter word to reverse" << endl;
    cin >> word;
    while (word[length])
        length++;
    char *res = reverseString(word, length);
    cout<<res<<endl;
    delete[] word;
}