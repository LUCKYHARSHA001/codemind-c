#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    int i,j;
    int sum1=0,sum2=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]%2==0)
            {
                sum1+=mat[i][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(mat[i][j]%2==1)
            {
                sum2+=mat[i][j];
            }
        }
    }
    printf("%d %d",sum1,sum2);
}