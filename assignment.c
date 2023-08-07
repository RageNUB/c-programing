#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        }
    }
    if(n%2==0){
        printf("%d %d",ar[(n/2)-1],ar[(n/2)]);
    } else {
        printf("%d",ar[((n+1)/2)-1]);
    }
    
    return 0;
}