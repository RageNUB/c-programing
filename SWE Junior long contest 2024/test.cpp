#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, sum = 0;
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        int k= i;
        while (k > 0)
        {
            sum += k%10;
            k /= 10;
        }
        
    }
    cout<<sum<<endl;
    
    return 0;
}