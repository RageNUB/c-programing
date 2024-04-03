#include <stdio.h>

void test(int t,int a, int i){
    if(t==0) return;
    int n,s;
    printf("Case %d : Enter size of an Array: ",a);
    scanf("%d",&n);
    int ar[n];
    printf("Case %d : Enter Array values: ",a);
    for(int j=0;j<n;j++){
        scanf("%d",&ar[j]);
    }
    printf("Case %d : Enter value for find: ",a);
    scanf("%d",&s);
    int result = 0;
    for(int k=0;k<n;k++){
        if(ar[k]==s){
            result = k +1;
            break;
        }
    }
    if(result > 0){
        printf("Case %d: Found on position %d",a,result);
    } else {
        printf("Case %d: Not Found",a);
    }
    printf("\n");
    test(t-1,a+1,i+1);
}
int main()
{
    int t;
    printf("Enter total test case count:");
    scanf("%d",&t);
    test(t,1,0);
    return 0;
}