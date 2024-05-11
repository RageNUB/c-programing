#include <bits/stdc++.h>
using namespace std;

bool ascending(pair<int, int> a, pair<int, int> b)
{
    return (a.second - a.first) < (b.second - b.first);
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), ascending);

    long long height = 0;
    for (int i = 0; i < n; i++)
    {
        height += (long long)v[i].first;
    }
    height += (long long)v[n - 1].second - (long long)v[n - 1].first;

    cout << height << endl;

    return 0;
}