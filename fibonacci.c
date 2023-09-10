#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c,i;
    printf("%d %d ",a,b);
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}