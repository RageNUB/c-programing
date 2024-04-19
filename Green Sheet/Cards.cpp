#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    bool inc = true;
    for (int i = 0; i < 4; i++)
    {
        if (!(a[i] <= a[i + 1]))
            inc = false;
    }
    bool dec = true;
    for (int i = 0; i < 4; i++)
    {
        if (!(a[i] >= a[i + 1]))
            dec = false;
    }
    if (inc)
        cout << "C" << endl;
    else if (dec)
        cout << "D" << endl;
    else
        cout << "N" << endl;

    return 0;
}