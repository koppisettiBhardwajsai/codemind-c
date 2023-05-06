#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int visited[101]={};
    for(i=0;i<n;i++)
    {
        if(visited[a[i]]!=1)
        {
            printf("%d ",a[i]);
            visited[a[i]]=1;
        }
    }
}