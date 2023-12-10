#include <stdio.h>
#include <math.h>
int main()
{
    int x,num,sum=0,i;
    scanf("%d",&x);
    while(true)
    {
        sum=0;
        for(;x>0;)
        {
            num=x%10;
            sum+=pow(num,2);
            x/=10;
        }
        x=sum;
        if(sum<=9)
        {
            break;
        }
    }
    if(sum==1 || sum==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}