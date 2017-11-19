#include<stdio.h>
#include<string.h>

void main()
{
    char word[5];

    printf("Enter a word to be compared\n");
    scanf("%s",word);

    if (strcmp(word,"Hello") == 0)

       printf("Yes, you guess it! It was %s\n",palabra);

    else
       printf("It is not the word set\n");
}
