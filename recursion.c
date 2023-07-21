#include<stdio.h>
int fun(int n)
{
    if(n==1)
        return 1;
        else
        return 1+fun(n-1);
}
int main()
{int n=4;
printf("%d",fun(n));
return 0;
}