#include <stdio.h>
int main()
{
    int x,y,i;
    scanf("%d %d",&x,&y);
    for(i=x+1;i<y;i++)
    {
       printf("%d %d %d
",i,(i*i),(i*i*i)); 
    }
}