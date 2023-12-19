#include <stdio.h>
int main()
{
    int i,j,n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            printf("False");
            count=1;
            break;
        }
        
    }
    if(count==0)
     {
         printf("True");
     }
}