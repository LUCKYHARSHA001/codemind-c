#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d",&x,&y);
    if(x+y>=11)
    {
        printf("%d",21-(x+y));
    }
    else
    {
        printf("-1");
    }
}