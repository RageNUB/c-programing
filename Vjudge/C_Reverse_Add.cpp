#include <bits/stdc++.h>
using namespace std;

pair<long long, bool> checkPalindrome(long long n)
{
    long long digit, rev = 0, num;
    num = n;
    do
    {
        digit = n % 10;
        rev = (rev * 10) + digit;
        n /= 10;
    } while (n != 0);
    if (num == rev)
        return {rev, true};
    else
        return {rev, false};
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        bool flag = false;
        bool ck = false;
        pair<long long, bool> p = checkPalindrome(x);
        for (int i = 0; i <= 1000; i++)
        {
            if (!p.second)
            {
                x += p.first;
                p = checkPalindrome(x);
            }
            else
            {
                cout << i << " " << p.first << endl;
                break;
            }
        }
    }

    return 0;
}