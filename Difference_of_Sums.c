#include <stdio.h>
int main()
{
    int n,i,a=0,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a+=i*i;
        b+=i;
    }
    printf("%d",(b*b)-a);
}