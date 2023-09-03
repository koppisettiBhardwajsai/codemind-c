#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n,e=n,c=0;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    int s=0;
    while(t>0)
    {
        int r=t%10;
        s+=pow(r,c);
        c--;
        t=t/10;
    }
    if(e==s) printf("True");
    else printf("False");
}