#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int tiger=0,pathan=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            if(ar[i][0] == ar[i][1]){

            } else if(ar[i][0] > ar[i][1]){
                tiger++;
            } else if(ar[i][0] < ar[i][1]){
                pathan++;
            }
        }
    }
    if(tiger == pathan){
        printf("Draw");
    } else if (tiger > pathan){
        printf("Tiger");
    } else {
        printf("Pathan");
    }
    return 0;
}