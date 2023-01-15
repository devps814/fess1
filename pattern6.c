#include<stdio.h>
int main(){
    int k;
    printf("enter the number here");
    scanf("%d",&k);
    int s=k-1;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=s;j++)
        printf("1");
        s--;
    
        for(int j=1;j<=i;j++)
        printf("%d",i);
        printf("\n");
    }
}
