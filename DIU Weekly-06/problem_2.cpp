#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int flag = 0;

    for(int i=0,j=str.length(); i<j; i++,j--){
        if(flag <= 1 && str[i] == str[j-1]){
            
        } else {
            flag += 1;
        }
    }

    if(flag == 1) cout << "YES";
    else cout << "NO";

    return 0;
}