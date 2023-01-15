#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter number here");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       int r=n%i;
       if(r==0)
       {
       sum=sum+i;
       }
    }
    if( sum==n)
    printf("perfect no");
    else
    printf("not perfect");
                
     return 0;           
}