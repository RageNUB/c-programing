#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int target;
        cin >> target;
        bool dp[target + 1];
        for (int i = 0; i <= target; i++)
        {
            dp[i] = false;
        }
        dp[1] = true;
        for (int i = 1; i <= target; i++)
        {
            if (dp[i])
            {
                if (i + 3 <= target)
                    dp[i + 3] = true;
                if (i * 2 <= target)
                    dp[i * 2] = true;
            }
        }

        if (dp[target])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}