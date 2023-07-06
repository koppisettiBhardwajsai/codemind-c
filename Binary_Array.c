#include<stdio.h>
int binary(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0 && a[i]!=1)
        {
            return -1;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    int s=binary(a,n);
    if(s==-1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}