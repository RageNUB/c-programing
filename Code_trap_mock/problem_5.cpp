#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
    }
    if (count == 1) cout << "Bhaizone" << endl;
    else if( count <= 3) cout << "Regular" << endl;
    else if(count <= 5) cout << "Flirting with you" << endl;
    else if( count <= 7) cout << "Likes you" << endl;
    else if(count <= 9) cout << "Psychopath" << endl;
    else cout << "Broken Keyboard" << endl;
    return 0;
}