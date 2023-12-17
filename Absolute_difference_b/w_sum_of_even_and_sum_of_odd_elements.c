#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,n,e=0,o=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            e+=arr[i];
        }
        else if(arr[i]%2==1)
        {
            o+=arr[i];
        }
    }
    j=abs(e-o);
    printf("%d",j);
}