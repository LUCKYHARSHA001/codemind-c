#include <stdio.h>
int main()
{
    int x,y,z,w;
    scanf("%d %d %d %d",&w,&x,&y,&z);
    if(w== x || w==y || w==z)
    {
        printf("YES");
    }
    else if(w== (x+y) || w==(x+z) || w==(y+z))
    {
        printf("YES");
    }
    else if(w==(x+y+z))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}