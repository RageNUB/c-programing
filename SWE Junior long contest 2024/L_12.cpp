#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        bool isSwaped = false;
        if (a > b)
        {
            swap(a, b);
            isSwaped = true;
        }
        long long mx = 0;
        for (int i = a; i <= b; i++)
        {
            long long j = i, cnt = 1;
            while (j != 1)
            {
                if (j % 2 == 0)
                    j /= 2;
                else
                    j = 3 * j + 1;

                cnt++;
            }
            mx = max(mx, cnt);
        }
        if (!isSwaped)
            cout << a << " " << b << " " << mx << endl;
        else
            cout << b << " " << a << " " << mx << endl;
    }

    return 0;
}