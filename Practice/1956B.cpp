#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        
        sort(v.begin(), v.end());
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[i + 1])
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}