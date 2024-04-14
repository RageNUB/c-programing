#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 0 || n == 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int s, e;
    cin >> s >> e;
    int cnt = 0;
    for (int i = s; i <= e; i++)
    {
        if (isPrime(i))
        {
            int reverse = 0, n = i;
            do
            {
                int digit = n % 10;
                reverse = (reverse * 10) + digit;
                n = n / 10;
            } while (n != 0);

            if (i == reverse)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}