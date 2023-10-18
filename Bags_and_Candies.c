#include <stdio.h>
int main()
{
    int n,k,m;
    scanf("%d %d %d",&n,&k,&m);
    if(n%(k*m)==0)
    {
        printf("%d",n/(k*m));
    }
    else
    {
        printf("%d",n/(k*m)+1);
    }
}