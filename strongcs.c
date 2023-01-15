int main(){
    int k,t,sum=0,r;
    printf("enter number here");
    scanf("%d",&k);
    t==k;
    while(k>0)
    {
        r= k%10;
        int fact =1;
        for(int i=1;i<=r;i++){
            fact= fact*i;
    } sum= sum + fact;
      k= k/10;
    }
    if(t==sum)
    {
        printf("strong no\n");}
        else{
            printf("not a strong no\n");
        }
        return 0;
}
    
