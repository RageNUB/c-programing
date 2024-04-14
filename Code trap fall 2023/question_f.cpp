#include <bits/stdc++.h>
using namespace std;

const int N = 5e7 + 7;
bool isPrime[N];
void init(int e)
{
    for (int i = 0; i <= e; i++)
        isPrime[i] = true;

    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= e; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * 2; j <= e; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
int main()
{
    int s, e, cnt = 0;
    cin >> s >> e;
    init(e);
    for (int i = s; i <= e; i++)
    {
        if (isPrime[i])
        {
            string number = to_string(i);
            string reverseStr = number;
            reverse(reverseStr.begin(), reverseStr.end());
            if (number == reverseStr)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}