#include <stdio.h>
int main()
{
    int i,j,n,flag=0;
    scanf("%d",&n);
    int a[n];
    int max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        max+=a[i];
    }
 
    int x=max/n;
     for(int m=0;m<n;m++)
       {
            if(x==a[m])
            {
              printf("True");
              flag=1;
              break;
            }
       }
       if(flag==0)
       {
           printf("False");
       }
       
       
}