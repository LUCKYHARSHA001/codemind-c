#include <stdio.h>
int  main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[n]);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(i=1;i<n-1;++i)
    {
        if((arr[i-1]%2!=0&&arr[i+1]%2==0)|| (arr[i-1]%2==0 && arr[i+1]%2!=0))
        {
            count++;
        }
    }
    printf("%d",count);
}