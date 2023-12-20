#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int x;
    int flag=0;
    scanf("%d",&x);
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(x==mat[i][j])
            {
                printf("1");
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("0");
    }
    
}