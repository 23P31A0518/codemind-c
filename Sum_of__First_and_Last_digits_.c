#include<stdio.h>
int main()
{
    int x,a,b=0;
    scanf("%d",&x);
    a=x%10;
    while(x>9)
    {
        x=x/10;
    }
    printf("%d",a+x);
}