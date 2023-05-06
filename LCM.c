#include<stdio.h>
int main()
{
    int i=0,a,b;
    scanf("%d%d",&a,&b);
    while(1)
    {
        i++;
        if(a*i%b==0)
        {
            break;
        }
    }
    printf("%d",a*i);
}