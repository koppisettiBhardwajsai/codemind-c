#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag=1;
    int i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            flag++;
        }
    }
    if(flag==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}