#include<stdio.h>
int main(){
    int n,sum=0,a=1;
    printf("enter no here");
    scanf("%d",&n);
   
    while(a<=n)
    {
        sum+=a;
        a++;
    }
     printf("%d",sum);
    return 0;
}