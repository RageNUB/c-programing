#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
int nums[N];

void descMerge(int l, int r, int mid)
{
    int leftSize = mid - l + 1;
    int L[leftSize + 1];
    int rightSize = r - mid;
    int R[rightSize + 1];

    for(int i=l,j=0; i<=mid; i++,j++)
    {
        L[j] = nums[i];
    }
    for(int i=mid+1,j=0; i<=r; i++,j++)
    {
        R[j] = nums[i];
    }

    L[leftSize] = INT_MIN;
    R[rightSize] = INT_MIN;

    int lp = 0, rp = 0;
    for(int i=l; i<=r; i++)
    {
        if(L[lp] >= R[rp])
        {
            nums[i] = L[lp];
            lp++;
        }
        else
        {
            nums[i] = R[rp];
            rp++;
        }
    }
}
void mergeSort(int l, int r)
{
    if(l==r) return;
    int mid = (l+r)/2;
    mergeSort(l, mid);
    mergeSort(mid+1, r);
    descMerge(l, r, mid);
}
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr2[i];
    }

    for(int i=0; i<n+m; i++)
    {
        if(i < n)
        {
            nums[i] = arr1[i];
        }
        else
        {
            nums[i] = arr2[i-n]; 
        }
    }

    mergeSort(0, (n+m)-1);

    for(int i=0; i<n+m; i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}