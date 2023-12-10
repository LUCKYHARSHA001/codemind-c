#include <stdio.h>
int main()
{
    int n,i,j,count=0,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       {
           for(j=2;j<i;j++)
           {
               if(i%j==0)
               {
                   count++;
                   break;
                   
               }
           }
       }
    }
    printf("%d",count+1);
}