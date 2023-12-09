#include <stdio.h>
int main()
{
    int n,i,a=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a +=i;
        }
    }
    if(a==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}