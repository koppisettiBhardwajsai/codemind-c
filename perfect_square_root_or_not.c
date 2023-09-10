#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    float s=sqrt(n);
    if(s==(int)s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}