#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    int flag = 0;

    for(int i=0; i<n; i++){
        // int val;
        // cin >> val;
        // arr[i] = val;
        cin >> arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout << arr[i]<< " ";
    // }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j) continue;
            if(flag < 1 && x == arr[i]+arr[j]){
                cout << i+1 << " " << j+1;
                flag = 1;
            }
        }
    }
    if(flag == 0) cout << "IMPOSSIBLE";
    return 0;
}