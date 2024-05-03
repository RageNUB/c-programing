#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s , p, n, m;
    cin>>s>>p;
    bool flag = false;
    n = sqrt(s);
    for (int i = 1; i <= n; i++)
    {
        m = s - i;
        // n = s / i;
        for (int j = 1; j <= m; j++)
        {
            if(j*m == p && j+m == s) 
            {
                // cout<<"found"<<endl;
                flag = true;
                break;
            }
            // if(i*j == p && i+j == s)
            // {
            //     flag = true;
            //     break;
            // }
        }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}