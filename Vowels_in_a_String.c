#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    char vowel;
    int count=0;
    scanf("%[^
]s",s);
    scanf(" %c",&vowel);
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]==vowel){
            count=i;
            break;
        }
    }
    if(count==0){
        printf("False");
    }
    else{
        printf("True
%d",count);
    }
}