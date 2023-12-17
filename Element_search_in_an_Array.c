#include <stdio.h>
int main()
{
    int i,j,n,x,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(j=0;j<n;j++)
    {
        if(x==arr[j])
        {
            printf("True");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("False");
    }
}