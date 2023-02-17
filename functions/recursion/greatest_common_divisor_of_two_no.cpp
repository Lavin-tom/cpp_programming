// gretest common divisor of two number
#include <iostream>
using namespace std;
void GCD(int a, int b)
{
    int r = 0;
    if (a > b)
    {
        r = a % b;
        if (r != 0)
            GCD(b, r);
        else
            cout << b << endl;
    }
    else
    {
        r = b % a;
        if (r != 0)
            GCD(a, r);
        else
            cout << a << endl;
    }
}
int main()
{
    int a, b;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    GCD(a, b);
}