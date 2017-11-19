#include<stdio.h>

void main()
{
    char character;

    printf("Enter a character \n");
    scanf("%c",&character);

    switch(character)
    {
        case 'a': printf("It is a vowel\n");break;
        case 'e': printf("It is a vowel\n");break;
        case 'i': printf("It is a vowel\n");break;
        case 'o': printf("It is a vowel\n");break;
        case 'u': printf("It is a vowel\n");break;
        case 'A': printf("It is a vowel\n");break;
        case 'E': printf("It is a vowel\n");break;
        case 'I': printf("It is a vowel\n");break;
        case 'O': printf("It is a vowel\n");break;
        case 'U': printf("It is a vowel\n");break;
        default: printf("It is not a vowel\n");
    }
}
