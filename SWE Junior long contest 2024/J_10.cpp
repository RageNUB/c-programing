#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;

int main()
{
    vector<int> v;
    v.push_back(0);
    for (int i = 1; i <= N; i++)
    {
        int k = i, sum = 0;
        while (k)
        {
            sum += k % 10;
            k /= 10;
        }
        v.push_back(v[i - 1] + sum);
    }

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << v[n] << endl;
    }

    return 0;
}