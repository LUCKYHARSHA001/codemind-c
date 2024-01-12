#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b && a>=(b*(b+1))/2){
        printf("YES");
    }
    else{
        printf("NO");
    }
}