#include<stdio.h>
int main()
{
    int n,r;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    scanf("%d",&n);
    while(n!=0){
         r=n%10;
        if(r==0) a++;
        if(r==1) b++;
        if(r==2) c++;
        if(r==3) d++;
        if(r==4) e++;
        if(r==5) f++;
        if(r==6) g++;
        if(r==7) h++;
        if(r==8) i++;
        if(r==9) j++;
        n=n/10;
    }
    if(a<2 && b<2 && c<2 && d<2 && e<2 && f<2 && g<2 && h<2 && i<2 && j<2){
        printf("Unique Number");
    }
    else{
        printf("Not Unique Number");
    }
}