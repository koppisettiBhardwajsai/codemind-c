#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c;
    printf("%d %d ",a,b);
    for(int i=1;i<n-1;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}