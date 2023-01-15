#include<stdio.h>
int main(){
    int n,sum=0,t,r;
    printf("enter number here:");
    scanf("%d",&n);
    t=n;
    while(t!=0){
    r=t % 10;
    long fact=1;
    for(int i=1;i<=r;i++)
    {
        fact=fact*1;
    }
    sum = sum+ fact;
    t= t/10;
    
    if(t==sum)
    {
        printf("strong no");}
        else{
            printf("not a strong");
        }
    return 0;
    
}
