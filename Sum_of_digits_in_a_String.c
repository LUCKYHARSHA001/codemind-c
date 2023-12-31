#include<stdio.h>
int main()
{
    char str[1000];
    int i,a=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            a+=str[i]-'0';
        }
    }
    printf("%d",a);
}