#include<stdio.h>
void main()
{
     int n;
 
     printf("Enter a number\n");
     scanf("%d",&n);
     while (n!=13)
     {
          if( n > 13)
          {
             printf("It is less than what you have entered, keep trying\n");
             scanf("%d",&n);
          }
          else
          {
              printf("It is greater than what you have entered, keep trying\n");
              scanf("%d",&n);
          }
     }
     printf("You guess it!\n");
}
