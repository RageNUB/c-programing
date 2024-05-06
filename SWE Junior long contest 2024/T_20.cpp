#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (gcd(a, b) + lcm(a, b) == a + b)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }

    return 0;
}