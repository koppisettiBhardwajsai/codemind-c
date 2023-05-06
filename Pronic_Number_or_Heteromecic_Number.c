#include<stdio.h>
int main()
{
    int m,i,flag=0;
    scanf("%d",&m);
    for(i=0;i<=m;i++)
    {
        if(i*(i+1)==m)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
}