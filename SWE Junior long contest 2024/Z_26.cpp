#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, a, q;
        cin>>n>>a>>q;
        int online = 0, offline = 0;
        bool flag = false;
        for (int i = 0; i < q; i++)
        {
            char x;
            cin>>x;
            if(x == '+') online++;
            else offline++;
            if(online - offline + a == n) flag = true;
        }

        if(flag || a == n) cout<<"YES"<<endl;
        else if(online + a >= n) cout<<"MAYBE"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}