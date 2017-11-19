#include<stdio.h>
#include<math.h>

void main()
{
	int a,b,c;
	float p,q;
	printf(" Ingrese los lados de un triangulo: ");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a<b+c && b<a+c && c<a+b)
	{
		p=(a+b+c)/2;
		q=sqrt(p*(p-a)*(p-b)*(p-c));
		printf(" El perímetro del triangulo es %d\n",a+b+c);
		printf(" El área del triangulo es %.2f\n",q);
	}
	else
	{
		printf (" Los números ingresados NO corresponden a los lados de un triángulo.\n");
	}
}



