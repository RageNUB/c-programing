#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;
    vector<long long int> values(n+1, 0);

    for(int i=1; i<=n; i++) {
        long long int x;
        cin >> x;
        values[i] = values[i - 1] + x;
    }
    for(int i=0; i<q; i++){
        int a,b;
        cin >> a >> b;
        long long int sum = values[b] - values[a-1];
        cout << sum << endl;
    }
    return 0;
}