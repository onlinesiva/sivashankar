#include <stdio.h>

int main()
{
   int a;
   
   printf("enter the number\t", a);
   scanf("%d", &a);
   if(a>0)
   printf("\n positive number");
   else if(a<0)
   printf("\n negative number");
   else if(a==0)
    printf("\n zero");
   getch();
}
