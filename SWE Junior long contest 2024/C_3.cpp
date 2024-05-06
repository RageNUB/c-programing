#include <bits/stdc++.h>
using namespace std;
const int N = 1e8 + 9;
int main()
{
    long long s, p, n, m;
    cin >> s >> p;
    bool flag = false;
    for (int i = 1; i <= N; i++)
    {
        m = p / i;
        if (i + m == s)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}