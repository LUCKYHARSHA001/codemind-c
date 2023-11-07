#include <stdio.h>
int main()
{
    int i,j,x;
    scanf("%d",&x);
    for(j=1;j<=x;j++)
    {
        for(i=1;i<=j;i++)
        {
            printf("*");
        }
        printf("
");
    }

}
