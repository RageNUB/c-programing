#include <bits/stdc++.h>
using namespace std;

bool knapsack(int n, long long s, int a[])
{
    if (n == 0)
        return s == 0;

    bool choice1 = knapsack(n - 1, s - a[n - 1], a);
    bool choice2 = knapsack(n - 1, s + a[n - 1], a);
    return choice1 || choice2;
}

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (knapsack(n, s, a))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}