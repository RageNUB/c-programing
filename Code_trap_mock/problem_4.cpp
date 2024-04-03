#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;

    for (int i = 123; i <= n; i++)
    {
        int n1 = i % 10;
        int n2 = (i / 10) % 10;
        int n3 = (i / 100) % 10;

        if((n1%3 ==0) && (n2%3 == 0) && (n3%3 == 0) && (n1 < n2) && (n2 < n3)){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}