#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int requiredMark = 1000 - m;
        bool dp[n + 1][requiredMark + 1];
        for (int i = 0; i <= requiredMark; i++)
        {
            dp[0][i] = false;
        }
        dp[0][0] = true;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= requiredMark; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][requiredMark])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}