#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int a, b, e;
    cin >> e;
    v.erase(v.begin() + e - 1);
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    cout << v.size() << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}