#include<stdio.h>
int main(){
    int i,num;
    scanf("%d",&num);
    int a=0,b=1,c;
    while(1){
        c=a+b;
        if(c==num){
            printf("True");
            break;

        }
        else if(c>= num){
            printf("False");
            break;
        }
        a=b;
        b=c;
    }
    
}