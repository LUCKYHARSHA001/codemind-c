#include<stdio.h>
#include<math.h>
int main() {
    int x,y;
    float sum=0;
    scanf("%d %d",&x,&y);
    for(int i=x;i<=y;i++) {
        sum+=sqrt(i);
    }
    printf("%.2f",sum);
}