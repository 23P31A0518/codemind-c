#include<stdio.h>
int main()
{
    int n,i=0,a,b;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        i=i+a;
        n=n/10;
    }
    printf("%d",i);
}