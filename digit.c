#include<stdio.h>
int main(){
    char ch;
    printf("enter character");
    scanf("%d", &ch);

    if(ch>0 && ch<9){
        printf("digit");
        }
    else{
        printf("not a digit");
        }
    return 0;
}