#include<stdio.h>
int main(){
    int x,y,a,b,c,d,e,f;
    scanf("%d %d",&x,&y);
    a=500-(x*2);
    b=1000-((x+y)*4);
    c=a+b;
    d=1000-(y*4);
    e=500-((x+y)*2);
    f=d+e;
    if(c>f){
        printf("%d",c);
    }
    else{
        printf("%d",f);
    }
}