#include<stdio.h>
void main()
{
    int a, b, c, mayor, medio, menor;
    printf("Ingrese tres numeros naturales diferentes\n");
    scanf("%d %d %d", &a,&b,&c);

    if ( a > b && b > c ){ mayor = a; medio = b; menor= c;}
    if ( a > c && c > b ){ mayor = a; medio = c; menor= b;}
    if ( b > c && c > a ){ mayor = b; medio = c; menor= a;}
    if ( b > a && a > c ){ mayor = b; medio = a; menor= c;}
    if ( c > b && b > a ){ mayor = c; medio = b; menor= a;}
    if ( c > a && a > b ){ mayor = c; medio = a; menor= b;}
    
    printf("Los numeros decrecientes son %d %d %d\n",mayor,medio,menor);
}
