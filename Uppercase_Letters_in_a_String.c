#include <stdio.h>
int main()
{
    char str[100];
    int count=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            count++;
        }
    }
    printf("%d",count);
}