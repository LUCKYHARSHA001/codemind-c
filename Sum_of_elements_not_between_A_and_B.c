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
    int x,y;
    scanf("%d %d",&x,&y);
    int flag=0;
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<x || arr[i]>y)
       {
         sum+=arr[i];
          flag=1;
       }
     
    }
   printf("%d",sum);
    
    
}