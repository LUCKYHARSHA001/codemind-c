#include <stdio.h>
int main()
{
    int n,sum=0,x;
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        sum=x+n;
        if((sum/10)==0)
        {
            break;
        }
        else
        {
            n=sum;
        }
        
        
    }
    printf("%d",sum);
    
}