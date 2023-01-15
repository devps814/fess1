#include<stdio.h>
int main(){
    int k;
    printf("enter a number here");
    scanf("%d",&k);
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++){
            if(i%2==0)
            printf("%c",(char)(64+i));
            else
            printf("%c",(char)(96+i));
        }
        printf("\n");

    }
    return 0;

}