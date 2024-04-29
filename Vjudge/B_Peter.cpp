#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int cigarettes = n;
        int i = n;
        while (i >= k)
        {
            i -= k;
            i++;
            cigarettes++;
        }
        cout << cigarettes << endl;
    }

    return 0;
}