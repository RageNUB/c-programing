#include <bits/stdc++.h>
using namespace std;
int main()
{
    int j, cnt = 1;
    cin>>j;
    do
    {
        cnt++;
        if (j % 2 == 0)
        {
            j /= 2;
        }
        else
        {
            j = 3 * j + 1;
        }
        
    } while (j != 1);
    cout<<cnt<<endl;
    return 0;
}