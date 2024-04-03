#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> distinctVal;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        distinctVal.insert(x);
    }
    cout << distinctVal.size();
    return 0;
}