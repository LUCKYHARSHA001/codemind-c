#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int max=0,i,k;
    scanf("%[^
]s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>max)
        {
            max=str[i];
            k=i;
        }
    }
    printf("%c",str[k]);
}