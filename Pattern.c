#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n+1;j++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}