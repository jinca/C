#include<stdio.h>
void main()
{
    int num, c, d, u;

    printf("Enter a number of three ciphers\n");
    scanf("%d",&num);

    c = num /100;
    d = (num % 100)/10;
    u = (num %100) % 10;

    printf("Cents number %d\n",c);
    printf("Decen number %d \n",d);
    printf("Unit number %d \n",u);
}

