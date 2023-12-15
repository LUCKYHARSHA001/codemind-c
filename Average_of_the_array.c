#include <stdio.h>
int main()
{
    int x;
    float sum=0;
    float avg;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<=x-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<x;j++)
    {
        sum+=a[j];
    }
    avg=sum/x;
    printf("%.2f",avg);
}