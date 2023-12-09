#include <stdio.h>
int main()
{
    int n,i,sum=0,pro=1;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        pro*=i;
        sum+=i;
        n=n/10;
    }
    printf("%d",pro-sum);
   
}