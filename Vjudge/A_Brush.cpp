#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < 0)
                continue;
            sum += x;
        }
        cout << "Case " << k << ": " << sum << endl;
    }

    return 0;
}