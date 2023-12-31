#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int count = 0, i;
    scanf("%[^
]s", str);
    for (i=0;str[i]!=NULL;i++)
    {
        if (str[i]==' '&&str[i+1]!=' ')
            count++;    
    }
    printf("%d",count+1);
}