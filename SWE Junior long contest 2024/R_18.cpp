#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, time, cost = INT_MAX;
    cin >> n >> time;
    while (n--)
    {
        int c, t;
        cin >> c >> t;
        if (t <= time)
            cost = min(cost, c);
    }

    if (cost == INT_MAX)
        cout << "TLE" << endl;
    else
        cout << cost << endl;

    return 0;
}