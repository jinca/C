#include <stdio.h>

void main()
{
	int N;
	printf("\n Ingresar un año mayor que 1600: ");
	scanf("%d",&N);
	if(N%100 == 0)
	{
		if(N%400 == 0) 
			printf(" Es bisiesto.\n");
		else
			printf(" No es bisiesto.\n");
	}
	else
	{
		if(N%4 == 0) 
			printf(" Es bisiesto.\n");
		else
			printf(" No es bisiesto.\n");
	}
	
}
