#include <stdio.h>
int main()
{
    int  x,y;
    scanf("%d",&x);
    if(x%10==0)
    {
        y=x/10;
        printf("%d",y);
    }
    else if(x%5==0 && x%10!=0)
    {
      y=(x/10)+1;
        printf("%d",y) ;
    }
    else
    {
        printf("-1");
    }
    
}