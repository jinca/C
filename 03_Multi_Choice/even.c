#include<stdio.h>

void main()
{
   int num;

   printf("Enter a number to evaluate if it is odd or even\n");
   scanf("%d",&num);

   switch( num % 2)
   {
        case 0: printf("It is even\n"); break;
        case 1: printf("It is odd\n"); break;
        default: printf("Invalid input! Please type a number\n");
   }
}


