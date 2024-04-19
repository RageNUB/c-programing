#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a[10];
        for (int i = 0; i < 10; i++)
            cin >> a[i];
        if (a[8] >= a[0] && a[8] <= a[2] && a[8] <= a[4] && a[8] >= a[6] && a[9] >= a[1] && a[9] >= a[3] && a[9] <= a[5] && a[9] <= a[7])
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}