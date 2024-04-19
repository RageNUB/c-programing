#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 7;
bool isPrime[N];
vector<int> v;
void init()
{
    for (int i = 0; i <= N; i++)
        isPrime[i] = true;

    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * 2; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i])
            v.push_back(i);
    }
}

int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int k = 0; k < n; k++)
        {
            string s;
            cin >> s;
            int sum = 0;
            reverse(s.begin(), s.end());
            for (int i = 0, j = 1; i < s.size(); i++, j *= 10)
            {
                sum += (s[i] - 'A') * j;
            }
            cout << v[sum] << endl;
        }
    }

    return 0;
}