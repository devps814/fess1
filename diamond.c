#include<stdio.h>
void main(){
    int k;
    printf("enter number here");
    scanf("%d",&k);
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k-i;j++)
        printf("  ");
        for(int s=1;s<=i;s++)
        printf("  *  ");
        printf("\n");
    }
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=k-i;j++)
        printf("  ");
        for(int s=1;s<=i;s++)
        printf(" *  ");
        printf("\n");
    }
    }
