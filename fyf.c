#include<stdio.h>
#include<math.h>
int main()
{
    int choose;
    float area,s,l,w,b,h,r;
    const float PI=3.14;
    printf("1-circle\n");
    printf("2-square\n");
    printf("3-rectangle\n");
    printf("4-triangle\n");
    scanf("%d",&choose);
    switch(choose)
    {
    case 1:
        scanf("%f",&r);
        area=PI*r*r;
        printf("%.2f",area);
        break;
    case 2:
        scanf("%f",&s);
        area=s*s;
        printf("%.2f",area);
        break;
    case 3:
        scanf("%f %f",&l,&w);
        area=l*w;
        printf("%.2f",area);
        break;
    case 4:
        scanf("%f %f",&b,&h);
        area:0.5*b*h;
        printf("%.2f",area);
    }
}
