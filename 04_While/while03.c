#include <stdio.h>

int main()
{
    int i=2, c=0;

    while (i <= 20)
    {
       printf("%d \n",i);
       c +=1;
       i +=2;
    }

    printf("There are %d numbers\n",c);
    return 0;
}
