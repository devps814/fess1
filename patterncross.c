#include<stdio.h>
int main(){
    int k;
    printf("enter number here");
    scanf("%d",&k);
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++){
        if(i<=k&&j<=k&&i<=j)
        printf("*");
        else
         printf(" ");
         }
         printf("\n");
    }

    return 0;
}
   