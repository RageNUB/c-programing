#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
int dp[N][N];
bool subset_sum(int n, int a[], int sum)
{
    if (n == 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }
    if (dp[n][sum] != -1)
        return dp[n][sum];

    if (a[n - 1] <= sum)
    {
        return dp[n][sum] = subset_sum(n - 1, a, sum - a[n - 1]) || subset_sum(n - 1, a, sum);
    }
    else
    {
        return dp[n][sum] = subset_sum(n - 1, a, sum);
    }
}
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (!(sum % 2 == 0))
        {
            cout << "NO" << endl;
            continue;
        }

        int half = sum / 2;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= half; j++)
            {
                dp[i][j] = -1;
            }
        }

        if (subset_sum(n, a, half))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}