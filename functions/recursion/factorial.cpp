// factorial using recursion

#include <iostream>
using namespace std;
void factorial(int n)
{
    static int fact = 1;
    fact *= n;
    if (n > 1)
        factorial(n - 1);
    else
        cout << fact << endl;
}
int main()
{
    int n;
    cout << "enter no" << endl;
    cin >> n;
    factorial(n);
}