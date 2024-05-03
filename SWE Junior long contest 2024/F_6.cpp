#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 1; i <= s.length(); i++)
    {
        char tmp = s[(2 * i - 1) - 1];
        s[(2 * i - 1) - 1] = s[(2 * i) - 1];
        s[(2 * i) - 1] = tmp;
    }
    cout << s << endl;

    return 0;
}