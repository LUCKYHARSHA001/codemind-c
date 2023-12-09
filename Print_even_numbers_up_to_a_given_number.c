#include <stdio.h>
int main()
{
    int i,n,l,z;
    scanf("%d %d",&n,&l);
    for(i=n;i<=l;i++)
    {
      if(i%2==0)
      {
          printf("%d ",i);
      }
    }
}