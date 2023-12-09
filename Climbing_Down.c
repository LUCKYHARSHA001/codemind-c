#include <stdio.h>
int main()
{
    float a,b,x,y;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    float temp1=a/x;
    float temp2=b/y;
    if(temp1<temp2)
    {
        printf("Walter");
    }
    else if(temp1==temp2)
    {
        printf("Both");
    }
    else
    {
        printf("Jesse");
    }
}