#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int high, mid, low;
    if (a >= b && a >= c)
    {
        high = a;
        if (b >= c)
        {
            mid = b;
            low = c;
        }
        else
        {
            mid = c;
            low = b;
        }
    }
    else if (b >= a && b >= c)
    {
        high = b;
        if (a >= c)
        {
            mid = a;
            low = c;
        }
        else
        {
            mid = c;
            low = a;
        }
    }
    else
    {
        high = c;
        if (a >= b)
        {
            mid = a;
            low = b;
        }
        else
        {
            mid = b;
            low = a;
        }
    }

    cout << low << endl
         << mid << endl
         << high << endl
         << endl
         << a << endl
         << b << endl
         << c << endl;
    return 0;
}