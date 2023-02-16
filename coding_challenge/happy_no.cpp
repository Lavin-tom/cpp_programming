// wap to find the no is happy no or not
// Happy no
// 19 -> (1^2)+(9^2)= 82
// 82 -> (8^2)+(2^2)= 68
// 68 -> (6^2)+(6^8)=100
// 100 -> (1^2)+(0^2)+(1^0) =1
// after fourth iteration we reach at 1 so 19 is a happy no

#include <iostream>
using namespace std;
bool happyNo(int n)
{
    int count = 0, sum = 0, r;
    int temp = n;
    bool flag = 0;
    while (true)
    {
        sum = 0;
        while (n > 0)
        {
            r = n % 10;
            sum += r * r;
            n /= 10;
        }
        n = sum;
        if (sum == 1)
        {
            flag = 1;
            break;
        }
        else if (sum == temp)
            break;
    }
    return flag;
}
int main()
{
    int n;
    bool r;
    cout << "enter no" << endl;
    cin >> n;
    r = happyNo(n);
    if (r)
        cout << n << " is a happy no" << endl;
    else
        cout << n << " is not a happy no" << endl;
}