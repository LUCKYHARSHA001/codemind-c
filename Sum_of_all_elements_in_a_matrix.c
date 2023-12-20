#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    int i,j;
    int max=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
            max+=mat[i][j];
        }
    }
    printf("%d",max);
}
