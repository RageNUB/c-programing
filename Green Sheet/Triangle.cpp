#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        if (a >= b + c)
            cout << "Area = " << fixed << setprecision(1) << (a + b) / 2 * c << endl;
        else
            cout << "Perimetro = " << fixed << setprecision(1) << a + b + c << endl;
    }
    else if (b >= a && b >= c)
    {
        if (b >= a + c)
            cout << "Area = " << fixed << setprecision(1) << (a + b) / 2 * c << endl;
        else
            cout << "Perimetro = " << fixed << setprecision(1) << a + b + c << endl;
    }
    else
    {
        if (c >= b + a)
            cout << "Area = " << fixed << setprecision(1) << (a + b) / 2 * c << endl;
        else
            cout << "Perimetro = " << fixed << setprecision(1) << a + b + c << endl;
    }
    return 0;
}