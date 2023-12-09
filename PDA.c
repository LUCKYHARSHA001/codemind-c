#include <stdio.h>
int main()
{
    int i,j=0,n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            j+=i;
        }
    }
    if(j==n)
    {
        printf("PERFECT");
    }
    else if(j<n)
    {
        printf("DEFICIENT");
    }
    else
    {
        printf("ABUNDANT");
    }
}