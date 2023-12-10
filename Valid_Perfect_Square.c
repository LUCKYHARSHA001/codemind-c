#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int n,a;
        scanf("%d",&n);
        a=sqrt(n);
        if((a*a)==n){
            printf("True
");
        }
        else{
            printf("False
");
        }
    }  
}