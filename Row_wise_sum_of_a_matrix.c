#include<stdio.h>
int main(){
    int m,n,sum;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<=m-1;i++){
           sum=0;
        for(int j=0;j<=n-1;j++){
            sum=sum+arr[i][j];
        }
        printf("%d ",sum);
    }
}