#include <stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(j=0;j<n;j++)
    {
        if(arr[j]<min)
        {
            min=arr[j];
        }
    }
    printf("%d",min);
}