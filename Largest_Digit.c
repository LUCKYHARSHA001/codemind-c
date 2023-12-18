#include <stdio.h>
int main()
{
    int a, largest=0,digit;
    scanf("%d",&a);
    while(a>0)
    {
        digit = a%10;
        if(digit>largest)
        {
            largest=digit;
        }
        a /= 10;
    }
    printf("%d",largest);
}
