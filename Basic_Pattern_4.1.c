#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=2;i<=n+1;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",i%2);
        }printf("
");
    }
    
}