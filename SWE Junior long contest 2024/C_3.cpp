#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s , p;
    cin>>s>>p;
    bool flag = false;
    for (int i = 1; i <= s; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if(i*j == p && i+j == s)
            {
                flag = true;
                break;
            }
        }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}