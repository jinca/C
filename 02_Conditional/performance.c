#include<stdio.h>
void main()
{
    float grade;
 
    printf("Enter your grade\n");
    scanf("%f",&grade);

    if (grade >=0  && grade <=20)
    {
      if (grade <8)
          printf("Performance: BAD\n");
      else if(grade <16)
          printf("Performance: GOOD\n");
      else
          printf("Performance: EXCELENT\n");
    }
    else
          printf("Please a valid range, the grades only allow (0-20)\n");
}
