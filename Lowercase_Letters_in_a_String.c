#include<stdio.h>
int main(){
    char str[100],count=0;
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++){
       if(str[i]>='a'&&str[i]<='z'){
            count++;
        }
    }
    printf("%d",count);
}