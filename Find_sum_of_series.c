#include<stdio.h>
int main()
{
    float s=0,i;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+1/i;
    }
    printf("%.2f",s);
}