#include <stdio.h>
int main()
{
    int i,n,x,sum1=0,sum2=0;
    scanf("%d %d",&n,&x);
     for(i=1;i<n;i++) 
     {
      if(n%i==0)
      {
          sum1+=i;
      }
     }
     for(i=1;i<x;i++)
     {
         if(x%i==0)
         {
             sum2+=i;
         }
     }
     if(sum1==x && sum2==n)
     {
         printf("Amicable");
     }
     else
     {
         printf("Not Amicable");
     }
    
}