#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<i;k++)
        {
            printf("* ");
        }printf("
");
    }
}
