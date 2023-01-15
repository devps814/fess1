#include<stdio.h>
void main(){
    int a,b;
    printf("enter number here:\n",a);
     scanf("%d",&a);
    printf("enter number here:\n",b);
    scanf("%d",&b);
    printf("before swapping = %d %d\n",a ,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping = %d %d \n",a,b);

}