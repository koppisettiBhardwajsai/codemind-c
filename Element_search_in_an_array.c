#include<stdio.h>
int search(int *a,int n,int se)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==se)
        {
            return i;
        }
    }
    return -1;
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
    int se;
    scanf("%d",&se);
    int s=search(a,n,se);
    if(s==-1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}