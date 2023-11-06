#include <stdio.h>
int main()
{
    int x,y,i,count=0;
    scanf("%d %d",&x,&y);
    for(i=x;i<=y;i++)
    {
       if(i%2==0 && i%3==0)
       {
       count++;
       }
       
    }
   printf("%d",count);
    
}