#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        int dp[m];
        for (int i = 0; i < m; i++)
        {
            cin >> dp[i];
        }

        int cnt = 0;

        for (int k = 0; k < 1000; k++)
        {
            for (int i = 1; i < m; i++)
            {
                dp[i] = max(0, dp[i] - dp[i - 1]);
            }
            dp[0] = max(0, dp[0] - dp[m - 1]);
        }

        for (int i = 1; i < m; i++)
        {
            if (dp[i] && dp[i - 1])
                dp[i] = 0;
        }
        if (dp[m - 1] && dp[0])
            dp[0] = 0;

        for (int i = 0; i < m; i++)
        {
            if (dp[i] != 0)
                cnt++;
        }
        if (cnt != 0)
            cout << cnt << endl;
        else
            cout << "0" << endl;

        for (int i = 0; i < m; i++)
        {
            if (dp[i] != 0)
                cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}