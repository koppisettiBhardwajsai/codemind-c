#include <stdio.h> 
int main()
{
    int n;
    scanf("%d",&n);
    int i, j;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",'A'-1 + i);
        }
        printf("
");
    }
}