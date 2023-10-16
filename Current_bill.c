#include <stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x<=199)
    {
       printf("%.2f",(x*1.20)+100);
    }
    else if(x>=200 && x<400)
    {
        printf("%.2f",(x*1.50)+100);
    }
    else if(x>=400 && x<600)
    {
        printf("%.2f",(x*1.80)+(x*1.80)*15/100);
    }
    else if(x>=600)
    {
        printf("%.2f",(x*2.0)+(x*2.0)*15/100);
    }
    
}