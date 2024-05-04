#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int over = 0, ball = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == 'O')
            {
                ball++;
            }
        }
        over = ball / 6;
        ball = ball % 6;

        if (over > 1 && ball > 1)
            cout << over << " OVERS " << ball << " BALLS" << endl;
        else if (over > 1 && ball == 1)
            cout << over << " OVERS " << ball << " BALL" << endl;
        else if (over > 1 && !ball)
            cout << over << " OVERS" << endl;
        else if (over == 1 && ball > 1)
            cout << over << " OVER " << ball << " BALLS" << endl;
        else if (over == 1 && ball == 1)
            cout << over << " OVER " << ball << " BALL" << endl;
        else if (over == 1 && !ball)
            cout << over << " OVER" << endl;
        else if (!over && ball > 1)
            cout << ball << " BALLS" << endl;
        else if (!over && ball == 1)
            cout << ball << " BALL" << endl;
    }

    return 0;
}