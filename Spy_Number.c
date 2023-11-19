#include <stdio.h>

int main() {
    int number, sum = 0, digit,product=1;
    scanf("%d", &number);

    while (number != 0) 
    {
        digit = number % 10;
        sum += digit;
        product *= digit;
        number /= 10;
    }
    if(sum == product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }

    return 0;
}