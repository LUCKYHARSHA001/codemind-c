#include <stdio.h>
int main()
{
    int i,j,n,count1,count2;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0&&i%2!=0)
        {
            count1++;
        }
      
       
    }
    if(count1>=n/2)
    {
        
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}