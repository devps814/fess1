#include<stdio.h>
int main(){
    int k;
    printf("enter number here");
    scanf("%d",&k);
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++){
            if(j%2==0)
            printf("%c",(char)(64+j));
            else
            printf("%c",(char)(96+j));
        }
        printf("\n");
    }
    return 0;
}