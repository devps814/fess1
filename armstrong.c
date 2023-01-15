#include<stdio.h>
#include<math.h>
int main(){
    int k,t,sum=0,r;
    printf("enter number here:");
    scanf("%d",&k);
    t=k;
    while(k>0){
        r=k%10;
        sum= sum + (r*r*r);
        k=k/10;}

        if(t==sum){
        printf("Armstrong number\n");}
        else{
        printf("not a Armstrong");}
     
    return 0;
}