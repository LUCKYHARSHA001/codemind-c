#include <stdio.h>
int main()
{
    int i,t,a,b,k,n,j,l,count1,count2,total;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {   
        scanf("%d %d %d %d",&n,&a,&b,&k);
        count1=0,count2=0;
        total=0;
        for(j=1;j<=n;j++)
        {
            if((j%a == 0)&&(j%b == 0))
            {
                j++;
            }
            else
            {
                if((j%b == 0)&&(j%a != 0))
                count1++;
                else if((j%a == 0)&&(j%b != 0))
                count2++;
                total = count1 + count2;
            }
       }
       if((count1+count2) >= k)
       printf("Win
");
       else
       printf("Lose
");
    }
    return 0;
}