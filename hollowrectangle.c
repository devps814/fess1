#include<stdio.h>
int main(){
    int k;
    printf("enter a number here");
    scanf("%d",&k);
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++){ 
            if(i==1||j==1||i==k||j==k)
            printf("*");
            else
            printf("%c",(char)(64+j));
    }
          printf("\n");
}
return 0;
}