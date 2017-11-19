#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	
	printf("Enter a real number:");
	scanf("%f",&x);

	printf("The number elevate to two is %.2f\n",pow(x,2));
	printf("The square of the number is %.2f\n",sqrt(x));
}
