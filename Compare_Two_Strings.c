#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],str1[100];
    int i,c;
    scanf("%s %s",str,str1);
    c=strcmp(str,str1);
    if(c==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}