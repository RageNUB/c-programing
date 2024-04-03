#include <bits/stdc++.h>
using namespace std;
int pointReqired(vector<int> &arr, int n, int x)
{
    int point = 0;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        int difference = abs(arr[i] - arr[j]);
        point += min(difference, x);
    }
    return point;
}
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int result = pointReqired(arr, n, x);
        cout << result << endl;
    }
    return 0;
}