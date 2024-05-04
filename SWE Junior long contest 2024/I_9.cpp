#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
bool isPrime[N];
void init(int n)
{
    for (int i = 0; i <= n; i++)
        isPrime[i] = true;

    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
        if (isPrime[i])
            for (int j = i * 2; j <= n; j += i)
                isPrime[j] = false;
}
int main()
{
    int n, a, i;
    cin >> n;
    init(n);
    for (i = n - 3; i > 3; i--)
    {
        a = n - i;
        if (!isPrime[i] && !isPrime[a])
        {
            break;
        }
    }
    cout << a << " " << i << endl;

    return 0;
}