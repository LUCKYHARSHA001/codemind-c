#include <stdio.h>
int main()
{
    int n,k,x,y,a,b;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    if(n==k)
    {
        printf("%d",n*x);
    }
    else if(n>k && x>y)
    {
        b=(n-k);
        a=(x*k)+(b*y);
        printf("%d",a);
    }
    else
    {
        a=n*x;
        printf("%d",a);
    }
    
}