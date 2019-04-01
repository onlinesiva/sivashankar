#include <stdio.h>

int main()
{
   int a;
   
   printf("enter the number\t", a);
   scanf("%d", &a);
   if(a%2==0)
   printf("\n even number\b");
   else 
   printf("\n odd number\b");
   getch();
}
