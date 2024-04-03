#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, n;
    cin >> test_case;
    while (test_case--)
    {
        set<int> s;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        for (auto it = s.begin(); it != s.end(); it++)
        {
            v.push_back(*it);
        }
        reverse(v.begin(), v.end());
        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}