#include <bits/stdc++.h>
using namespace std;

// long long int totaChoco(long long int workingDay){
//     if(workingDay == 0) return;
//     long long choco = pow(2,)
// }
int main()
{
    int t;
    cin >> t;
    long long int arr[t];
    // long long int chocoMake = 0;
    for (int i = 0; i < t; i++)
    {
        long long int n;
        cin >> n;
        arr[i] = n;
    }

    for(int i=0; i<t; i++){
        long long int workingDay = arr[i];
        long long int chocoMake = pow(2, workingDay) -1;
        long long int chocoLeft = chocoMake % 7;
        cout << chocoLeft << endl;
    }
    return 0;
}