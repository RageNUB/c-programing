#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        string s;
        cin >> s;
        if (s == "clicou")
        {
            if (n != 0) n--;
        }
        else
            n++;
    }
    cout << n << endl;

    return 0;
}