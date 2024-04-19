#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string hexa;
    while (n != 0)
    {
        string c;
        int mod = n % 16;
        if (mod >= 10 && mod <= 15)
        {
            c = 'A' + mod - 10;
        }
        else
        {
            c = '0' + mod;
        }
        hexa.append(c);

        n /= 16;
    }
    reverse(hexa.begin(), hexa.end());
    cout << hexa << endl;

    return 0;
}