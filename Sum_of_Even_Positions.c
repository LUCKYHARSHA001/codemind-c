#include <stdio.h>
int main()
{
    int i,j,n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<=n-1;j++)
    {
        if(j%2==0)
        {
            sum +=a[j];
        }
    }
    printf("%d",sum);
}