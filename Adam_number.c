#include<stdio.h>
int main()
{
    int n;
    int rev=0,r;
    scanf("%d",&n);
    int s,a;
    s=n*n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    a=rev*rev;
    int e=0,q;
    while(a>0)
    {
        q=a%10;
        e=e*10+q;
        a=a/10;
    }
    if(s==e)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}