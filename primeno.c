#include<stdio.h>
int main(){
    int n;
    printf("enter value");
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0){
        c++;
        }
        if(c==2){
        printf("prime no\n");}
        else
        {
        printf("not prime\n");
        }
    }
    return 0;
 
}