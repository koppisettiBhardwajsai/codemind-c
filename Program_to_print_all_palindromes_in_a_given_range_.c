#include<stdio.h>
void palindromeinrange(int n)
{
    int t=n,r,rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==t) 
    {
        printf("%d ",rev);
    }
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        palindromeinrange(i);
    }
}