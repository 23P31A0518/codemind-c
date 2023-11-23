#include<stdio.h>
int main()
{
	int i=1,n,sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  sum=sum*i;
	}
	  printf("%d",sum);
}