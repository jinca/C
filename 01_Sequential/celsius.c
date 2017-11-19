#include<stdio.h>

void main()
{
	float tgc,tgf;
	printf("Enter the temperature in celcius:");
	scanf("%f",&tgc);
	tgf=(tgc*1.8)+32;
	printf("The temperature in fahrenheit is %.2f\n",tgf);
}
