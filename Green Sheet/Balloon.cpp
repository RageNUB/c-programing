#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n, m;
    cin >> n >> m;
    float volume = (4.0 / 3.0) * (3.1415 * (n * n * n));
    int result = m / volume;
    cout << result << endl;
    return 0;
}