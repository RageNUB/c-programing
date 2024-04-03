#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a, b, c;
        cin >> a >> b >> c;

        if(a == b) cout << c << endl;
        else if(b == c) cout << a << endl;
        else cout << b << endl;
    }
    return 0;
}