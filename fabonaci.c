#include<stdio.h>
int main()
{
    int a=0,b=1,c,i=1,n=10;
    printf("%d\t%d\t",a,b);
    while(i<=(n-2))
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        i++;
    }
}