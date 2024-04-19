#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n, h, c, l;

    while (cin >> n >> h >> c >> l)
    {
        float sqMeter = (sqrtf((h * h) + (c * c)) * 1.0 * l * n) / 10000.0;
        cout << fixed << setprecision(4) << sqMeter << endl;
    }

    return 0;
}