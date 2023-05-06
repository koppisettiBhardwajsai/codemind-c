#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int t=i;
        int g=1;
        while(t)
        {
            int r=t%10;
            if(r==0||i%r!=0)
            {
                 g=0;
                 break;
            }
            t=t/10;
        }
        if(g==1)
        {
            printf("%d ",i);
        }
    }
}