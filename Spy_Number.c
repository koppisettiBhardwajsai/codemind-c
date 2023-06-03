#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=0,p=1;
    while(n!=0)
    {
        int r=n%10;
        s+=r;
        p*=r;
        n/=10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}