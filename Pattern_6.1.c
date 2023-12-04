#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }printf("
");
    }
}