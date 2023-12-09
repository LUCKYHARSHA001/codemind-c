#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,diff,count;
    scanf("%d %d",&x,&y);
    diff=abs(x-y);
    count=(diff+9)/10;
    printf("%d",count);
    
}