#include <stdio.h>
int main()
{
    int a,b,c,i,lcm;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        c=a*i;
        if(c%b==0)
        {
            lcm=c;
            break;
        }
    }
    printf("%d",lcm);
}