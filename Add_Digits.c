#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=0,w=0;
    while(n!=0){  //38,3
        int r=n%10;  //8,3
        s=s+r;   //8,8+3=11
        n=n/10;//3,0
        if(n==0 && s>9) //0,11
        {
            n=s; //n=11
            s=0;
        }
    }
    printf("%d",s);
}