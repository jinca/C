#include <stdio.h>

int main(int argc, char *argv[])
{
   for (int i = 1; i < argc; i++)
   {
       printf("%i \t", argc);
       printf("%s \n", argv[i]);
   }
}
