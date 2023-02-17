// wap to find the nth no in the fibonacci series
// using recursion

#include <iostream>
using namespace std;
void fibonacci(int n, int f, int s)
{
    static int count = 0;
    int sum = 0;
    sum = f + s;
    f = s;
    s = sum;
    count++;
    if (count < n - 2)
        fibonacci(n, f, s);
    else if (count == n - 2)
        cout << sum << endl;
}
int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    fibonacci(n, 0, 1);
}