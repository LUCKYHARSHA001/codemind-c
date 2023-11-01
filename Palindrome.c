#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%10 == x/100 ||x%10 == x/1000)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}