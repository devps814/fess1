#include<stdio.h>
int main(){
    int k;
    printf("enter number here");
    scanf("%d",&k);
    if(k>30){
        printf("passed");
    } else{
        printf("failed");
    }
    return 0;
}