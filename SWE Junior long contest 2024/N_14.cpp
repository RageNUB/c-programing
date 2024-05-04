#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, mx = 0;
    cin >> a >> b >> c;

    int r1 = a + b + c;
    int r2 = a + b * c;
    int r3 = a * b + c;
    int r4 = a * b * c;
    int r5 = (a + b) * c;
    int r6 = a * (b + c);
    mx = max({r1, r2, r3, r4, r5, r6});
    cout << mx << endl;
    return 0;
}