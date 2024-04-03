#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int common_number, count = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] > count)
            {
                common_number = x;
                count = mp[x];
            }
            if(x > common_number && mp[x] >= count)
            {
                common_number = x;
                count = mp[x];
            }
        }

        cout << common_number << " " << count << endl;
    }

    return 0;
}