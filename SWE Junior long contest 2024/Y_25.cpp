#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int total = n, i = n;
        while (i >= 3)
        {
            i -= 3;
            i++;
            total++;
        }

        if (i == 2)
            cout << total + 1 << endl;
        else
            cout << total << endl;
    }

    return 0;
}