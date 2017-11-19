#include<stdio.h>
void main()
{
	int n,m;
	
	printf("Ingrese el primer numero:");
	scanf("%d",&n);

	printf("Ingrese el segundo numero:");
	scanf("%d",&m);

	printf("La suma de los numeros es %d\n",n+m);
	printf("La diferencia de los numeros es %d\n",n-m);
	printf("El producto de los numeros es %d\n",n*m);
	printf("la division de los numeros es %f\n",(float)n/m);
}
