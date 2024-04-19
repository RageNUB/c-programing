#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, q, sz = 0;
        cin >> k >> q;
        int position[k], players[q];
        for (int i = 0; i < k; i++)
        {
            cin >> position[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> players[i];
            sz++;
        }

        for (int i = 0; i < sz; i++)
        {
            if (position[0] <= players[i])
            {
                cout << position[0] - 1 << " ";
            }
            else
            {
                cout << players[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}