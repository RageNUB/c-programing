#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n-1; i++)
    {
        int x;
        cin>>x;
        a[x-1] = x;
    }
    for (int i = 0; i < n; i++)
    {
        if(!a[i])
        {
            cout<<i+1<<endl;
            break;
        }
    }
    
    return 0;
}