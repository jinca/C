#include<stdio.h>

void main()
{
  int month;
 
  printf("Enter the month you have born (1-12)\n");
  scanf("%d",&month);

  switch (month)
  {
   case 1: printf("You are Capricornio\n"); break;
   case 2: printf("You are Acuario\n"); break;
   case 3: printf("You are Piscis\n"); break;
   case 4: printf("You are Aries\n"); break;
   case 5: printf("You are Tauro\n"); break;
   case 6: printf("You are Geminis\n"); break;
   case 7: printf("You are Cancer\n"); break;
   case 8: printf("You are Leo\n"); break;
   case 9: printf("You are Virgo\n"); break;
   case 10: printf("You are Libra\n"); break;
   case 11: printf("You are Escorpio\n"); break;
   case 12: printf("You are Sagitario\n"); break;
   default: printf("Invalid input! Please enter a number from 1 to 12\n");
  }
}
