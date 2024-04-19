#include <bits/stdc++.h>
using namespace std;
int main()
{
    double v, d;
    while (cin >> v >> d)
    {
        double r = d / 2;
        double h = v / (3.14 * r * r);
        double area = 3.14 * r * r;
        cout << "ALTURA = " << fixed << setprecision(2) << h << endl;
        cout << "AREA = " << fixed << setprecision(2) << area << endl;
    }

    return 0;
}