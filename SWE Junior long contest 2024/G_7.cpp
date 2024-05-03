#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, m, s;
    char c;
    string ampm;
    cin >> h >> c >> m >> c >> s >> ampm;

    if (ampm == "AM")
    {
        if (h == 12) h = 0;
    }
    else
    {
        if (h != 12) h += 12;
    }
    cout << setw(2) << setfill('0') << h << c << setw(2) << setfill('0') << m << c << setw(2) << setfill('0') << s << endl;
    return 0;
}