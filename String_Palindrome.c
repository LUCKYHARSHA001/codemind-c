#include <stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    int len = strlen(str);
    int flag=1;
    for(int i=0;i<=len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
              flag=0;
        }
    }
    if(flag!=0)
    {
        printf("Palindrome");
    }
    else if(flag==0)
    {
        printf("Not Palindrome");
    }
}