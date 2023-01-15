#include<stdio.h>
void main(){
    int k,a,sum=0,t;
    printf("enter number here:");
    scanf("%d",&k);
    t=k;
    while(k>0)
    {
    a=k%10;
    sum= (sum*10)+ a;
    k=k/10;}
    if(t==sum)
        printf("pallindrome\n");
    else
        printf("not a pallindrome\n");
    

}
