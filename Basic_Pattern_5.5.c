#include<stdio.h>
int main()
{
    int n,i,k,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("*",i);
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        printf("
");
    }
}