#include <stdio.h>
int main()
{
    int i,j,n,sum=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
        
    }
    for(int k=0;k<n;k++)
    {
        j=sum/n;
       
    if(arr[k]<=j)
    {
        count++;
    }
    
    }
    printf("%d",count);
}