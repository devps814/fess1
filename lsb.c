#include<stdio.h>
void main(){
    int k;
    printf("enter number here");
    scanf("%d",&k);
    if(k&1==1){
        printf("set");
    } else{
        printf("unset");
    }
}