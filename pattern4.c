#include<stdio.h>
int main(){
    int k;
    printf("enter the number here");
    scanf("%d",&k);
    for(int i=0;i<=k;i++)
    {
        for(int j=1;j<=k;j++){
            printf("%c",(char)(96+j)) ;
        }
        printf("\n");
    }
    return 0;
}