#include<stdio.h>
int main(){
    int k;
    printf("enter number here(0-100):");
    scanf("%d",&k);
    if(k>30 &&k<=100){
        printf("passed\n");
    } else if(k<=30){
        printf("failed\n");
    }
    else{
        printf("wrong number\n");
    }
    return 0;
}