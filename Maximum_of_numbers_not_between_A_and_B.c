#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max1=0;
    for(i=0;i<n;i++)
    {
        if(max1<arr[i])
        {
          max1=arr[i];  
        }
    }
    int x,y;
    scanf("%d %d",&x,&y);
    int max=0,flag=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<x || arr[i]>y)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                flag=1;
            }
        }
    }
    if(max1==max)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1");
    }
}