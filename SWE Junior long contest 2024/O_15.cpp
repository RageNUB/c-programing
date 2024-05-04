#include <bits/stdc++.h>
using namespace std;

int main()
{
    int round;
    cin >> round;

    for (int i = 0; i < round; i++)
    {
        int n, m, mi, count = 0;
        cin >> n >> m >> mi;

        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a, a + n);
        for (int k = 0; k < mi; k++)
        {
            count += a[k];
        }

        if (count <= m)
            cout << "ESCAPE THE ROOM!" << endl;
        else
            cout << "OPPS!" << endl;
    }
    return 0;
}