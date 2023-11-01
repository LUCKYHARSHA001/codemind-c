#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if((x-y)%(2*z)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}