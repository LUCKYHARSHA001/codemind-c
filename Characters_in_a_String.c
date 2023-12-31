#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int count=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='a'|| 'A' && str[i]<='z'||'Z')
        {
            count++;
        }
    }
    printf("%d",count);
}