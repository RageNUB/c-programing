#include <stdio.h>

void test(int t,int a, int i){
    if(t==0) return;
    int n,s;
    scanf("%d",&n);
    int ar[n];
    for(int j=0;j<n;j++){
        scanf("%d",&ar[j]);
    }
    scanf("%d",&s);
    int result = 0;
    for(int k=0;k<n;k++){
        if(ar[k]==s){
            result = k +1;
            break;
        }
    }
    if(result > 0){
        printf("Case %d: %d",a,result);
    } else {
        printf("Case %d: Not Found",a);
    }
    printf("\n");
    test(t-1,a+1,i+1);
}
int main()
{
    int t;
    scanf("%d",&t);
    test(t,1,0);
    return 0;
}