#include <stdio.h>
int strictlyeven(int *a, int n) {
    for(int i=0;i<n;i++) 
    {
        if (i%2!=0 && a[i]%2==0) 
        {
            return 0; 
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
    if (strictlyeven(a,n)) 
    {
        printf("True");
    } 
    else 
    {
        printf("False");
    }
}
