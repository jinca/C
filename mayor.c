#include<stdio.h>
void main()
{
    int a, b, c;
    
    printf("Ingrese tres numeros naturales diferentes\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("El mayor de los tres numeros es %d \n",a); 

    if (b > c && b > a)
        printf("El mayor de los tres numeros es %d \n",b); 

    if (c > a && c > b)
        printf("El mayor de los tres numeros es %d \n",c); 
}
