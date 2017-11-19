#include<stdio.h>
#include<ctype.h>
void main()
{
   int n;

   printf("Enter a number\n");
   scanf("%d",&n);

   if(isdigit(n)==0)
   {
      if(n%2==0)
        printf("It is even\n");
      else
        printf("It is odd\n");
   }
   else
       printf("Please you need to enter a number to be evaluated\n");
}
