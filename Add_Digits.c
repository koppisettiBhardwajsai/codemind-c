#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        int r=n%10;
        sum=sum+r;
        n=n/10;
    if(n==0&&sum>9)
    {
        n=sum;
        sum=0;
    }
    }
    printf("%d",sum);
}