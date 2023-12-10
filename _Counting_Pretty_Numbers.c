#include <stdio.h>
int main()
{
    int n,l,r,i,j,count;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&l,&r);
        count=0;
        for(j=l;j<=r;j++)
        {
            if(j%10==2 || j%10==3 || j%10==9)
            {
                count++;
            }
        }
        printf("%d
",count);
    }
    
}