#include <stdio.h>
int main()
{
    int h,m,hm,total;
    scanf("%d %d",&h,&m);
    hm=h*60;
    total=1440-(hm+m);
    printf("%d",total);
}