#include <stdio.h>
#include <string.h>
int main()
{
   char word[20];
   int i,length=0;
   scanf("%[^
]s",word);
   for(i=0;word[i]!=NULL;i++)
   {
       length+=1;
   }
   printf("%d",length);
}