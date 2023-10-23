#include<stdio.h>
int main()
{
    int p,c,b,m,cs,total;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    total=(p+c+b+m+cs)/5;
    if(total>=90)
    {
        printf("Grade A");
    }
    else if (total>=80)
    {
        printf("Grade B");
    }
    else if(total>=70)
    {
        printf("Grade C");
    }
    else if (total>=60)
    {
        printf("Grade D");
    }
    else if (total>=50)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
    }