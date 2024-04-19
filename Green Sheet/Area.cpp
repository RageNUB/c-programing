#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float triangle, circle, trapezium, square, rectangle;
    triangle = a * c * 0.5;
    circle = 3.14159 * c * c;
    trapezium = (a + b) / 2 * c;
    square = b * b;
    rectangle = a * b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << triangle << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circle << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezium << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << square << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rectangle << endl;
    return 0;
}